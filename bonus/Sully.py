import os

def main():
	i = 5
	if i > 0:
		if __file__ != "Sully.py":
			i = i - 1
		f = open("Sully_" + str(i) + ".py", "w")
		s = "import os{1}{1}def main():{1}{2}i = {4}{1}{2}if i > 0:{1}{2}{2}if __file__ != {0}Sully.py{0}:{1}{2}{2}{2}i = i - 1{1}{2}{2}f = open({0}Sully_{0} + str(i) + {0}.py{0}, {0}w{0}){1}{2}{2}s = {0}{3}{0}{1}{2}{2}f.write(s.format(chr(34), chr(10), chr(9), s, str(i))){1}{2}{2}f.close(){1}{2}{2}os.system({0}python3 Sully_{0} + str(i) + {0}.py{0}){1}{1}if __name__ == '__main__':{1}{2}main(){1}"
		f.write(s.format(chr(34), chr(10), chr(9), s, str(i)))
		f.close()
		os.system("python3 Sully_" + str(i) + ".py")

if __name__ == '__main__':
	main()
