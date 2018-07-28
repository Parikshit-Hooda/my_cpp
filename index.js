var nrc = require("node-run-cmd");
var prompt = require("prompt");

prompt.start();
prompt.get(['write_commit'], function(err, result) {
    console.log(result.write_commit);
    //  var command = `git add . && git commit -m '${result.write_commit}' && git push origin master && exit`;
    nrc.run('mkdir foo');
    // console.log(`git add . && git commit -m '${result.write_commit}' && git push origin master && exit`);
    nrc.run(['git add .', `git commit -m "${result.write_commit}"`, 'git push origin master']);
});