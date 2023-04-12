exports.logf = function (msg) {
    const dayjs = require('dayjs');
    t1 = dayjs().format('YYYY-MM-DD');
    filename = '/sdcard//' + t1 + ".txt";
    t2 =  dayjs().format('YYYY-MM-DD HH:mm:ss ');
    log = t2 + msg+'\n';
    const fs = require('fs');
    fs.appendFileSync(filename, log);
};