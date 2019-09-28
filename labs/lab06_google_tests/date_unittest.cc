#include "gtest/gtest.h"

#include <iostream>
#include <math.h>
#include <ctime>

#include "date.h"

using namespace std;

class DateTest : public ::testing::Test {
 public:
  void SetUp( ) { 
    // code here will execute just before the test ensues
	first_day = Date(2018, 9, 4);
	last_day = Date(2018, 12, 11);
  y2k = Date(1999, 12, 31);              // y2k
  ind_day = Date(1776, 7, 4);            // US Independence
  best_holiday = Date(2018, 10, 31);     // Halloween
  tomorrow = date_today + 1;    
  epoch = Date(0);
  class_start_epoch = Date(1536066000);   // 2018-09-04 13:00:00
  }
 protected:
  Date first_day;          // first day of classes
  Date last_day;           // last day of classes
  Date y2k;                // y2k
  Date ind_day;            // US Independence
  Date best_holiday;     // Halloween
  Date tomorrow;    
  Date answer_day;
  Date date_today;
  Date epoch;
  Date class_start_epoch;  
  int answer_num_days;
};



TEST_F(DateTest, PrintDateTests) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31\n";
  std::string expected_out_2 = "1776-07-04\n";
  std::string expected_out_3 = "2018-10-31\n";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

TEST_F(DateTest, PrintDateTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31";
  std::string expected_out_2 = "1776-07-04";
  std::string expected_out_3 = "2018-10-31";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  ind_day.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

/**
  *
  * Note, this is the only provided test case which actually uses our test fixture
  * 
  * However, it is illegal to mix TEST() and TEST_F() in the same test case (file).
  *
  */
  
TEST_F(DateTest, DaysBetweenTests) {
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "First day of class not setup properly";
  EXPECT_EQ(last_day.GetUsDate(), "12-11-2018") << "Last day of class not setup properly";
  EXPECT_EQ(first_day.DaysBetween(last_day), 98) << "Days between is not calculated properly";
}

/**
  *
  * NOPE!  Can't test PRIVATE methods
  *
  */
/*
TEST(DateTest, ConvertFromDays) {
	Date convert_first_day = ConvertToDays(2458365);
	EXPECT_STREQ(convert_first_day.GetUsDate(), "09-04-2018");
}
*/

TEST_F(DateTest, GetDateTests) {
  answer_day = ind_day - 1;

  std::time_t t = std::time(NULL);
  std::tm * now = std::localtime(&t);
  char s[100];
  
  std::string expected_out_2 = "1999-12-31";
  std::string expected_out_3 = "2018-09-04";
  std::string expected_out_4 = "1776-07-04";
  std::string expected_out_5 = "2018-10-31";
  std::string expected_out_7 = "1776-07-03";
  
  std::string output1 = date_today.GetDate();
  std::string output2 = y2k.GetDate();
  std::string output3 = first_day.GetDate();
  std::string output4 = ind_day.GetDate();
  std::string output5 = best_holiday.GetDate();
  std::string output6 = tomorrow.GetDate();
  std::string output7 = answer_day.GetDate(); 

  sprintf(s, "%d-%02d-%02d", now->tm_year+1900, now->tm_mon+1, now->tm_mday);
  EXPECT_EQ(output1, std::string(s)); //date_today
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
  EXPECT_EQ(output4, expected_out_4);
  EXPECT_EQ(output5, expected_out_5);
  sprintf(s, "%d-%02d-%02d", now->tm_year+1900, now->tm_mon+1, now->tm_mday+1);
  EXPECT_EQ(output6, std::string(s)); //tomorrow
  EXPECT_EQ(output7, expected_out_7);

}

TEST_F(DateTest, LeadingZeroTests) {
  std::time_t t = std::time(NULL);
  std::tm * now = std::localtime(&t);
  char s[100];

  sprintf(s, "%02d-%02d-%d\n", now->tm_mon+1, now->tm_mday, now->tm_year+1900);
  std::string expected_out_1 = std::string(s); 
  std::string expected_out_2 = "12-31-1999\n";
  std::string expected_out_3 = "09-04-2018\n";
  std::string expected_out_4 = "07-04-1776\n";
  std::string expected_out_5 = "10-31-2018\n";
  std::string expected_out_6 = "01-01-1970\n";
  std::string expected_out_7 = "09-04-2018\n";
  
  testing::internal::CaptureStdout();
  date_today.PrintUsDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  y2k.PrintUsDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  first_day.PrintUsDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintUsDate(true);
  std::string output4 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintUsDate(true);
  std::string output5 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  epoch.PrintUsDate(true);
  std::string output6 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  class_start_epoch.PrintUsDate(true);
  std::string output7 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  tomorrow.PrintUsDate(true);
  std::string output8 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1); // date_today
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
  EXPECT_EQ(output4, expected_out_4);
  EXPECT_EQ(output5, expected_out_5);
  EXPECT_EQ(output6, expected_out_6);
  EXPECT_EQ(output7, expected_out_7);
  sprintf(s, "%02d-%02d-%d\n", now->tm_mon+1, now->tm_mday+1, now->tm_year+1900);
  EXPECT_EQ(output8, std::string(s));
}


TEST_F(DateTest, PrintUsDateWithoutNewLineTestsfalse) {
  std::time_t t = std::time(NULL);
  std::tm * now = std::localtime(&t);
  char s[100];

  sprintf(s, "%02d-%02d-%d", now->tm_mon+1, now->tm_mday, now->tm_year+1900);
  std::string expected_out_1 = std::string(s); 
  std::string expected_out_2 = "12-31-1999";
  std::string expected_out_3 = "09-04-2018";
  std::string expected_out_4 = "07-04-1776";
  std::string expected_out_5 = "10-31-2018";
  std::string expected_out_6 = "01-01-1970";
  std::string expected_out_7 = "09-04-2018";
  
  testing::internal::CaptureStdout();
  date_today.PrintUsDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  y2k.PrintUsDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  first_day.PrintUsDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintUsDate(false);
  std::string output4 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintUsDate(false);
  std::string output5 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  epoch.PrintUsDate(false);
  std::string output6 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  class_start_epoch.PrintUsDate(false);
  std::string output7 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  tomorrow.PrintUsDate(false);
  std::string output8 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1); // date_today
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
  EXPECT_EQ(output4, expected_out_4);
  EXPECT_EQ(output5, expected_out_5);
  EXPECT_EQ(output6, expected_out_6);
  EXPECT_EQ(output7, expected_out_7);
  sprintf(s, "%02d-%02d-%d", now->tm_mon+1, now->tm_mday+1, now->tm_year+1900);
  EXPECT_EQ(output8, std::string(s));
}



TEST_F(DateTest, TodayDateTests) {
  time_t t = std::time(NULL);
  tm * now = std::localtime(&t);
  char s[100];

  sprintf(s, "%d-%02d-%02d", now->tm_year+1900, now->tm_mon+1, now->tm_mday);
  EXPECT_EQ(date_today.GetDate(), std::string(s)) << "Today's date not setup properly";

  testing::internal::CaptureStdout();
  date_today.PrintDate(false);
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, std::string(s)) << "Today's date not setup properly";
  
  sprintf(s, "%d-%02d-%02d\n", now->tm_year+1900, now->tm_mon+1, now->tm_mday);
  testing::internal::CaptureStdout();
  date_today.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output1, std::string(s)) << "Today's date not setup properly";

  sprintf(s, "%02d-%02d-%d", now->tm_mon+1, now->tm_mday, now->tm_year+1900);
  EXPECT_EQ(date_today.GetUsDate(), std::string(s)) << "Today's date not setup properly";
  
  testing::internal::CaptureStdout();
  date_today.PrintUsDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  sprintf(s, "%02d-%02d-%d", now->tm_mon+1, now->tm_mday, now->tm_year+1900);
  EXPECT_EQ(output2, std::string(s)) << "Today's date not setup properly";

  testing::internal::CaptureStdout();
  date_today.PrintUsDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();
  sprintf(s, "%02d-%02d-%d\n", now->tm_mon+1, now->tm_mday, now->tm_year+1900);
  EXPECT_EQ(output3, std::string(s)) << "Today's date not setup properly";
}

TEST_F(DateTest, GetUsDateTests) {
  time_t t = std::time(NULL);
  tm * now = std::localtime(&t);
  char s[100];
  
  std::string expected_out_2 = "12-31-1999";
  std::string expected_out_3 = "09-04-2018";
  std::string expected_out_4 = "07-04-1776";
  std::string expected_out_5 = "10-31-2018";
  std::string expected_out_6 = "01-01-1970";
  std::string expected_out_7 = "09-04-2018";
  
  std::string output1 = date_today.GetUsDate();
  std::string output2 = y2k.GetUsDate();
  std::string output3 = first_day.GetUsDate();
  std::string output4 = ind_day.GetUsDate();
  std::string output5 = best_holiday.GetUsDate();
  std::string output6 = epoch.GetUsDate();
  std::string output7 = class_start_epoch.GetUsDate();
  std::string output8 = tomorrow.GetUsDate();

  sprintf(s, "%02d-%02d-%d", now->tm_mon+1, now->tm_mday, now->tm_year+1900);
  EXPECT_EQ(output1, std::string(s));
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
  EXPECT_EQ(output4, expected_out_4);
  EXPECT_EQ(output5, expected_out_5);
  EXPECT_EQ(output6, expected_out_6);
  EXPECT_EQ(output7, expected_out_7);
  sprintf(s, "%02d-%02d-%d", now->tm_mon+1, now->tm_mday+1, now->tm_year+1900);
  EXPECT_EQ(output8, std::string(s));
}

TEST_F(DateTest, SomeOperationTests) {
  char s[100];
  answer_num_days = first_day.DaysBetween(last_day);
  sprintf(s, "%d", answer_num_days);
  EXPECT_EQ(std::string(s), "98") << "answer_number_days not setup properly";

  answer_day = first_day + answer_num_days;

  std::string expected_out_1 = "2018-12-11\n";
  std::string expected_out_2 = "2018-12-11";

  testing::internal::CaptureStdout();
  answer_day.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  answer_day.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);

  answer_day = y2k + 1;

  std::string expected_out_3 = "2000-01-01\n";
  std::string expected_out_4 = "2000-01-01";

  testing::internal::CaptureStdout();
  answer_day.PrintDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  answer_day.PrintDate(false);
  std::string output4 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output3, expected_out_3);
  EXPECT_EQ(output4, expected_out_4);

  Date jan_F (2016,01,01);
  Date march_F (2016,03,01);
  answer_num_days = march_F.DaysBetween(jan_F);
  sprintf(s, "%d", answer_num_days); 
  EXPECT_EQ(std::string(s), "60") << "DaysBetween not set up properly";
  
}



