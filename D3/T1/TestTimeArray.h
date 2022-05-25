/*
Filename: TestTimeArray.h
Description: Test the time taken with different ways of calculating the sum of two arries.
Version: 1.0.0
Date:08/29/2018
*/
#ifndef TESTTIMEARRAY_H
#define TESTTIMEARRAY_H
#include<time.h>

class TestTimeArray
{
    protected:
        int m_3DArray1[500][500][500],m_3DArray2[500][500][500],m_3DArrayAnswer[500][500][500];
        int m_nArraySize;//must <=999
        clock_t m_BeginTime,m_EndTime,m_TimePerRound;
    public:
        TestTimeArray();
        virtual ~TestTimeArray(){}
        virtual int MeasureCalculationTime(){}
};


//6 methods
class TestTimeArray_IJK: public TestTimeArray
{
    public:
    TestTimeArray_IJK(){}
    int MeasureCalculationTime();
};
class TestTimeArray_IKJ: public TestTimeArray
{
    public:
        TestTimeArray_IKJ(){}
    int MeasureCalculationTime();
};
class TestTimeArray_JIK: public TestTimeArray
{
    public:
        TestTimeArray_JIK(){}
    int MeasureCalculationTime();
};
class TestTimeArray_JKI: public TestTimeArray
{
    public:
        TestTimeArray_JKI(){}
    int MeasureCalculationTime();
};
class TestTimeArray_KIJ: public TestTimeArray
{
    public:
        TestTimeArray_KIJ(){}
    int MeasureCalculationTime();
};
class TestTimeArray_KJI: public TestTimeArray
{
    public:
        TestTimeArray_KJI(){}
    int MeasureCalculationTime();
};











#endif