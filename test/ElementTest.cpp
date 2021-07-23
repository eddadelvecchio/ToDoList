#include "../Element.h"
#include "../Date.h"
#include <gtest/gtest.h>

TEST(ElementTest, ConstuctorTest){
Element e("Testing");
EXPECT_EQ(e.getName(), "Testing");
EXPECT_FALSE(e.isChecked());
EXPECT_EQ(e.getDateTime(), "");
}

TEST(ElementTest, NameTest){
Element e;
e.setName("TestingName");
EXPECT_EQ(e.getName(), "TestingName");
}

TEST(ElementTest, CheckedTest){
Element e;
e.setChecked(true);
EXPECT_TRUE(e.isChecked());
}

TEST(ElementTest, DateTimeTest){
Element e;
e.setDateTime("15/09/2015");
EXPECT_EQ(e.getDateTime(), "15/09/2015");
}

TEST(ElementTest, ToggleTest){
Element e("Testing");
e.toggle();
EXPECT_TRUE(e.isChecked());
EXPECT_NE(e.getDateTime(), "");
e.toggle();
EXPECT_FALSE(e.isChecked());
EXPECT_EQ(e.getDateTime(), "");
}

TEST(ElementTest, OperatorEqualTest){
Element e1("Giorgio");
Element e2("Giorgio");
EXPECT_TRUE(e1 == e2);
e2.toggle();
EXPECT_TRUE(e1 == e2);
e2.setName("Paolo");
EXPECT_FALSE(e1 == e2);
}

TEST(ElementTest, DateTest){
    Date date1;
    EXPECT_ANY_THROW(date1.setYear(10000));
    EXPECT_ANY_THROW(date1.setYear(1799));
    EXPECT_ANY_THROW(date1.setMonth(13));
    EXPECT_ANY_THROW(date1.setMonth(0));
    EXPECT_ANY_THROW(date1.setDay(32));
    EXPECT_ANY_THROW(date1.setDay(0));
    Date date2(2021,02,01);
    EXPECT_ANY_THROW(date2.setDay(29));
}