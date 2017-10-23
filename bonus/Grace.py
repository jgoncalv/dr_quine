"""
	s
"""
f = open("Grace_kid.py", 'w')
str = "{0}{0}{0}{1}{2}s{1}{0}{0}{0}{1}f = open({0}Grace_kid.py{0}, 'w'){1}str = {0}{3}{0}{1}c = lambda f: f.write(str.format(chr(34), chr(10), chr(9), str)){1}c(f){1}"
c = lambda f: f.write(str.format(chr(34), chr(10), chr(9), str))
c(f)
