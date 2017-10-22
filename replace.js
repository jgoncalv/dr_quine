fs = require('fs');

fs.readFile('./Sully.c', 'utf8', function (err,data) {
  if (err) {
    return console.log(err);
  }
  console.log(data.replace(/\n/g, "%1$c").replace(/\"/g, "%2$c").replace(/	/g, "%3$c"));
});
