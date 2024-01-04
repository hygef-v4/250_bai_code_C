#include <stdio.h>
// tìm ra ngày đầu tiên của năm vào thứ mấy (0 = Sunday, 1 = monday, ....)
int get_1st_weekday(int year){  
  int day;
  day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;  // thuật toán tìm trên mạng
  return day;
}

int main(void)
{
   
   int year;
   int k = 0;
   do
   {
    printf("\nEnter your desired year:");
    scanf("%d",&year);
   } while(year <= 1582); // năm > 1582 thì ngưng loop nếu <= 1582 thì lặp lại loop
   
   // ngày đầu tiên của năm
   int starting_day = get_1st_weekday(year);
    
    // gọi array 1 string tên các tháng 
   char *months[]={"January","February","March","April",
   "May","June","July","August","September","October","November","December"};
   
   // gọi 1 array các ngày của năm ko nhuận từ tháng 1 - 12
   int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    // check xem có phải là năm nhuận ko nếu phải thì đổi 28 thành 29 
   if((year%4==0&&year%100!=0)||year%400==0)
       monthDay[1]=29;
    
    // in tên các tháng từ 1 - 12 
    for(int i = 0; i < 12; i++)
    {
        // số ngày của tháng 
        int days_of_month = monthDay[i];
      
      printf("\n\n---------------%s-------------------\n",months[i]);
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
      
      
    // in ra khoảng trống trước ngày đầu tiên của tháng 1 
      for(k = 0; k < starting_day; k++)
        {
            printf("     ");
        }
      for(int j = 1; j <= monthDay[i]; j ++)
      {
        // in ra từng ngày của 1 tháng
        printf("%5d", j); 

        // xuống dòng mỗi khi qua đi qua thứ 7
         k++;
            if (k > 6)
            {
                printf("\n");
                k = 0; // reset k mỗi khi xuống dòng
            } 
        starting_day = k; // cập nhật cho mỗi lần in hết các ngày của 1 tháng
      }
      
     
    }
    // tính thứ cho ngày đầu năm
    printf("\n");
    int first_day = get_1st_weekday(year);
    switch (first_day)
    {
        case 0:
        printf("\nSunday\n");
        break;

        case 1:
        printf("\nMonday\n");
        break;

        case 2:
        printf("\nTuesday\n");
        break;

        case 3:
        printf("\nWednesday\n");
        break;

        case 4:
        printf("\nThursday\n");
        break;

        case 5:
        printf("\nFriday\n");
        break;

        case 6:
        printf("\nSaturday\n");
        break;
    }
    return 0;
}
