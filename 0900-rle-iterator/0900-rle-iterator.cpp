class RLEIterator {
public:
    RLEIterator(const std::vector<int>& encoding)
    {
        m_encodings.reserve(encoding.size() / 2);
        for (int i = 0; i < encoding.size(); i += 2) {
            const int count = encoding[i];
            const int number = encoding[i + 1];
            m_encodings.emplace_back(count, number);
        }
    }
    int next(int n)
    {
        while (m_current_idx < m_encodings.size() && m_encodings[m_current_idx].first < n) {
            n -= m_encodings[m_current_idx].first;
            m_encodings[m_current_idx].first = 0;
            ++m_current_idx;
        }
        if (m_current_idx >= m_encodings.size())
            return -1;
        m_encodings[m_current_idx].first -= n;
        return m_encodings[m_current_idx].second;
    }
private:
    int m_current_idx = 0;
    std::vector<std::pair<int, int>> m_encodings;
};