var nrc = require("node-run-cmd");
var prompt = require("prompt");

prompt.start();
prompt.get(['write_commit'], function(err, result) {
    console.log(result.write_commit);
    nrc.run(['git add .', `git commit -m "${result.write_commit}"`, 'git push origin master']);
});