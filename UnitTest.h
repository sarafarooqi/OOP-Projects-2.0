class UnitTest{
    public:
    void runTests(){
        testAddition();
    }
    private:
    void testAddition(){
        Addition addition;

        if(addition.add(1,2) != 3){
            std::cout << "Test 1 failed!" << std::endl;
        }
        if(addition.add(-1,3) != 2){
            std::cout << "Test 2 failed!" << std::endl;
        }
         if(addition.add(-2,1) != -1){
            std::cout << "Test 3 failed!" << std::endl;
        }
         if(addition.add(0,3) != 3){
            std::cout << "Test 4 failed!" << std::endl;
        }
}
};
