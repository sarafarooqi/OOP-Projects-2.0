class UnitTest{
    public:
    void runTests(){
        testAddition();
    }
    private:
    void testAddition(){
        Addition addition;

        if(addition.add(1,2) != 3){
            cout << "Test 1 failed!" << endl;
        }
        if(addition.add(-1,3) != 2){
            cout << "Test 2 failed!" << endl;
        }
         if(addition.add(-2,1) != -1){
            cout << "Test 3 failed!" << endl;
        }
         if(addition.add(0,3) != 3){
            cout << "Test 4 failed!" << endl;
        }
}
};
