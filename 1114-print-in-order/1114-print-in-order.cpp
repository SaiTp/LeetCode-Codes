class Foo {
public:
    Foo() {
        
    }

    void first(function<void()> printFirst) {
        printFirst();
        a1.store(true, memory_order_release);
    }

    void second(function<void()> printSecond) {
        while(!a1.load(std::memory_order_acquire)) this_thread::yield();
        printSecond();
        a2.store(true, memory_order_release);
    }

    void third(function<void()> printThird) {
        while(!a2.load(std::memory_order_acquire)) this_thread::yield();
        printThird();
    }
private:
    atomic<bool> a1{false};
    atomic<bool> a2{false};
};