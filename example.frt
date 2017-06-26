x = 3;
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