coro crange(start, end) {
    while (start < end) {
        <: start;
        start += 1;
    }
}

coro wait(amount) {
    <!amount;
}

coro run() {
    for (crange(0, 5) :> x) {
        print(x);
        wait(1) :>;
    }
}

loop = CoroutineLoopType();
loop.start(run());