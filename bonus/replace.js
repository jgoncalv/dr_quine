fs = require('fs');

fs.readFile('./Sully.py', 'utf8', function (err,data) {
	if (err) {
		return console.log(err);
	}
	console.log(data.replace(/\n/g, "{1}").replace(/\"/g, "{0}").replace(/	/g, "{2}"));
});
