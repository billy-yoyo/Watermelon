x = 5;
print(x);
print("hello world");
func decor(f) {
	return func (*args) {
		print("test");
		return f(*args);
	};
}

func(decor) example(a, b) {
	return a + b;
}

print(example(5, 2));

func(decor) example2() {
    print("hi");
}

example2();
print(example(4, 1));

type A {
	func test(self, x) {
		print(x + 1);
	}
	
	func hello(self) {
		print("hello world");
	}
}

type(A) B {
	func __init__(self, b) {
		self.value = b;
		print("created object!");
	}

	func example(self) {
		print("sup?");
	}
	
	func hello(self) {
		print("value: " + self.value);
	}
}

a = A();
a.hello();
a.test(3);
a.__add__ = func (self, other) {
	return other * 2;
};
print(a + 2);

b = B(5);
b.example();
b.hello();
b.test(3);

lst = [1, 2, 3];
lst[1] = 5;
print(lst);
print("---- splice test");
print(lst[0:2]);
lst[1:] = lst[:-1];
lst = lst + 9;
print(lst);
del lst[1:3];
print(lst);

map = { "a"=3, "b"=6 };
print(map);
map["c"] = 7;
print(map["a"]);
print(map);

print("yes") if map["a"] == 3 else print("no");
if (x == 3) {
	print("x is 3");
} elif (x != 5) {
	print("x is not 5");
} else {
	print("x is 5");
}

try {
    raise "error";
} catch ( e=StringType ) {
    print(e.value);
}