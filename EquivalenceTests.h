class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testZeroIntegers();
        testMixtureIntegers();
        testBigPositiveIntegers();
        testBigNegativeIntegers();
        testSpecialCases();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testZeroIntegers(){
        Addition addition;
        if(addition.add(0, 3) != 3){
            cout << "Test 3 failed!" << endl;
        }
    }

    void testMixtureIntegers(){
        Addition addition;
        if(addition.add(-3,6) != 3){
            cout << "Test 4 failed!" << endl;
        }
    }

    void testBigPositiveIntegers(){
        Addition addition;
        if(addition.add(500, 50) != 550){
            cout << "Test 5 failed!" << endl;
        }
    }

    void testBigNegativeIntegers(){
        Addition addition;
        if(addition.add(-500, -230) != -730){
            cout << "Test 6 failed!" << endl;
        }
    }

    void testSpecialCases(){
        Addition addition;
        if(addition.add(1, -1) != 0){
            cout << "Test 7 failed!" << endl;
        }
    }

    // Add other test functions here
};
