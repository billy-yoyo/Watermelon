from os.path import isfile, join, realpath
from os import listdir

def count(path):
    print("counting [{}]".format(path))

    c = 0
    for f in listdir(path + "/"):
        if isfile(join(path + "/", f)):
            if f.endswith(".hx"):
                try:
                    for line in open(path + "/" + f):
                        c += 1
                except:
                    print("encountered error with file {}".format(f + "/" + path))
        else:
            c += count(join(path + "/", f))
    return c

print(count("/".join(realpath(__file__).split("\\")[:-1])))