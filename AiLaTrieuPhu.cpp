#include<iostream>
#include<string>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<stdio.h>
#include<cstdlib>
HANDLE wHnd;
HANDLE rHnd;
using namespace std;
int b[5]= {0,1,2,3,4};

void trogiup()
{
    cout<<"\n\n";
    cout<<"|======================================|\n";
    cout<<"| 1.  GỌI ĐIỆN THOẠI CHO NGƯỜI THÂN    |\n";
    cout<<"|======================================|\n";
    cout<<"| 2.              50/50                |\n";
    cout<<"|======================================|\n";
    cout<<"| 3.  HỎI Ý KIẾN KHÁN GIẢ TRƯỜNG QUAY  |\n";
    cout<<"|======================================|\n";
    
}

//=================================HE THONG CAU HOI========================================================================
void cauhoi(int ch, int &x)
{
	int a;
	
//-------------------------------------------------------------------------------------------------------------------------

	if(ch==1)
	{
		cout<<"\n\n  Nước Mỹ thuộc châu lục nào? \n";
		cout<<"|===========================================================|\n";
		cout<<"|        1. Châu Âu         ||          2. Châu Á           |\n";
		cout<<"|===========================================================|\n";
		cout<<"|        3. Châu Mỹ         ||          4. Châu Phi         |\n";
		cout<<"|===========================================================|\n";
		int cau1;
cauhoi1:
		do
    	{
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin>>cau1;
            if(cau1<0||cau1>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau1<0||cau1>4);
        
        if(cau1==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi1;
        }
        
        if(cau1==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Nước Mỹ thuộc châu lục nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Châu Mỹ\n";
            x=0;
        }
    }

//-------------------------------------------------------------------------------------------------------------------------
    
    if(ch==2)
    {
    	cout<<"\n\n  Đi�ền từ còn thiếu vào câu ca dao sau: \"Có công mài s�ắt có ngày nên... \" gì? \n";
    	cout<<"|=================================================|\n";
		cout<<"|        1. Kim        ||         2. Kìm�          |\n";
		cout<<"|=================================================|\n";
		cout<<"|        3. Dùi        ||         4. Kéo          |\n";
		cout<<"|=================================================|\n";
		int cau2;
cauhoi2:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin>>cau2;
            if(cau2<0||cau2>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau2<0||cau2>4);
        
        if(cau2==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi2;
        }
        
        if(cau2==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Đi�ền từ còn thiếu vào câu ca dao sau: \"Có công mài s�ắt có ngày nên... \" gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1. Kim \n";
            x=0;
        }
    }

//-------------------------------------------------------------------------------------------------------------------------
		
	if(ch==3)
    {
    	cout<<"\n\n  1 + 1 = ? \n";
    	cout<<"|=============================================|\n";
		cout<<"|        1. 4        ||        2. 1�           |\n";
		cout<<"|=============================================|\n";
		cout<<"|        3. 3        ||        4. 2           |\n";
		cout<<"|=============================================|\n";
		int cau3;
cauhoi3:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin>>cau3;
            if(cau3<0||cau3>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau3<0||cau3>4);
        
        if(cau3==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 25% \n 2 chiếm 25% \n 3 chiếm 25% \n 4 chiếm 25% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi3;
        }
        
        if(cau3==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  1 + 1 = ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. 2 \n";
            x=0;
        }
    }

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==4)
    {
    	cout<<"\n\n  Loại củ nào giúp v�ết thương mau lành không đẻ lại sẹo? \n";
    	cout<<"|===================================================|\n";
		cout<<"|        1. G�ừng        ||         2. Gi�ềng�         |\n";
		cout<<"|===================================================|\n";
		cout<<"|        3. Hành        ||         4. Nghệ          |\n";
		cout<<"|===================================================|\n";
		int cau4;
cauhoi4:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau4;
            if(cau4<0||cau4>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau4<0||cau4>4);
        
        if(cau4==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án \n 2 chiếm 15% \n 3 chiếm 5% \n 4 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi4;
        }
        
        if(cau4==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Loại củ nào giúp v�ết thương mau lành không đẻ lại sẹo? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Ngh�� \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==5)
    {
    	cout<<"\n\n  World Cup 2022 sẽ đư�ợc tổ ch�ức ở quốc gia nào? \n";
    	cout<<"|========================================================|\n";
		cout<<"|        1. Uruguay       ||         2. Argentina�        |\n";
		cout<<"|========================================================|\n";
		cout<<"|        3. Qatar         ||         4. Brazil           |\n";
		cout<<"|========================================================|\n";
		int cau5;
cauhoi5:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau5;
            if(cau5<0||cau5>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau5<0||cau5>4);
        
        if(cau5==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi5;
        }
        
        if(cau5==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  World Cup 2022 sẽ đư�ợc tổ ch�ức ở quốc gia nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Qatar \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==6)
    {
    	cout<<"\n\n  Bán buôn bán lẻ là phạm trù của ngành nào? \n";
        cout<<"|=============================================================|\n";
        cout<<"|     1. Công nghiệp        ||          2. Nông nghiệp        |\n";
        cout<<"|=============================================================|\n";
        cout<<"|     3. Thương Nghiệp      ||          4. Dịch vụ            |\n";
        cout<<"|=============================================================|\n";
		int cau6;
cauhoi6:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin>>cau6;
            if(cau6<0||cau6>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau6<0||cau6>4);
        
        if(cau6==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi6;
        }
        
        if(cau6==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Bán buôn bán lẻ là phạm trù của ngành nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Thương nghiệp\n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==7)
    {
    	cout<<"\n\n	 Cây ngay không sợ..  ? \n";
        cout<<"|===========================================================|\n";
        cout<<"|     1. Chết nằm        ||          2. Chết đứng           |\n";
        cout<<"|===========================================================|\n";
        cout<<"|     3. Chết ngồi       ||          4. Sống đứng           |\n";
        cout<<"|===========================================================|\n";
        int cau7;
cauhoi7:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau7;
            if(cau7<0||cau7>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau7<0||cau7>4);
        
        if(cau7==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 15% \n 2 chiếm 80% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi7;
        }

        if(cau7==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n	 Cây ngay không sợ..  ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Chết đứng\n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==8)
    {
    	cout<<"\n\n  Sat trong ti�ếng anh là th�ứ m�ấy? \n";
    	cout<<"|============================================================|\n";
		cout<<"|        1. Th�ứ 7        ||          2. Th�ứ 5�                |\n";
		cout<<"|============================================================|\n";
		cout<<"|        3. Th�ứ 2        ||          4. Chủ nh�ật             |\n";
		cout<<"|============================================================|\n";
		int cau8;
cauhoi8:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau8;
            if(cau8<0||cau8>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau8<0||cau8>4);
        
        if(cau8==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi8;
        }

        if(cau8==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Sat trong ti�ếng anh là th�ứ m�ấy? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1. Th�ứ 7 \n";
            x=0;
        }
    }

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==9)
    {
    	cout<<"\n\n  Nóc nhà Đông Dương là đỉnh nào? \n";
    	cout<<"|=============================================================|\n";
        cout<<"|     1. Bà Đen           ||          2. Phú sĩ               |\n";
        cout<<"|=============================================================|\n";
        cout<<"|     3. Trường Sơn       ||          4. Phanxipang           |\n";
        cout<<"|=============================================================|\n";
		int cau9;
cauhoi9:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau9;
            if(cau9<0||cau9>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau9<0||cau9>4);

        if(cau9==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 4 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi9;
        }
        
        if(cau9==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Nóc nhà Đông Dương là đỉnh nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Phanxipang \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==10)
    {
    	cout<<"\n\n  Đâu là tên 1 nguyên tố hóa học đầu tiên ? \n";
        cout<<"|===========================================================|\n";
        cout<<"|     1. Nitơ           ||           2. Natri               |\n";
        cout<<"|===========================================================|\n";
        cout<<"|     3. Liti           ||           4. Lưu huỳnh           |\n";
        cout<<"|===========================================================|\n";
        int cau10;
cauhoi10:
        do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau10;
            if(cau10<0||cau10>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau10<0||cau10>4);
        if(cau10==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>3);
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp số đã được sử dụng\n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 3 \n";
                cout<<"\n Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {

                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"\n Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {

                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 5% \n 3 chiếm 90% \n";
                cout<<"\n Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi10;

        }
        if(cau10==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Đâu là tên 1 nguyên tố hóa học đầu tiên? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Liti \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==11)
    {
    	cout<<"\n\n  Bên trên là ngói bên dưới là hang là cái gì? \n";
    	cout<<"|=============================================================|\n";
		cout<<"|        1. Nhà             ||          2. Hang động�          |\n";
		cout<<"|=============================================================|\n";
		cout<<"|        3. Miệng           ||          4. Mắt                |\n";
		cout<<"|=============================================================|\n";
		int cau11;
cauhoi11:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau11;
            if(cau11<0||cau11>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau11<0||cau11>4);
        
        if(cau11==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi11;
        }
        
        if(cau11==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Bên trên là ngói bên dưới là hang là cái gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Miệng \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==12)
    {
    	cout<<"\n\n  Vị thần coi giữ đất đai của một khu vực được dân gian gọi là gì ? \n";
        cout<<"|=============================================================|\n";
        cout<<"|     1. Thổ địa           ||          2. Công công           |\n";
        cout<<"|=============================================================|\n";
        cout<<"|     3. Ông địa           ||          4. Thần nông           |\n";
        cout<<"|=============================================================|\n";
		int cau12;
cauhoi12:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau12;
            if(cau12<0||cau12>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau12<0||cau12>4);
        
        if(cau12==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi12;
        }
        
        if(cau12==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Vị thần coi giữ đất đai của một khu vực được dân gian gọi là gì ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1. Thổ địa \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==13)
    {
    	cout<<"\n\n  Người ta thường gọi quốc gia nào là đất nước mặt trời mọc ? \n";
        cout<<"|=============================================================|\n";
        cout<<"|     1. Triều Tiên         ||          2. Hàn Quốc           |\n";
        cout<<"|=============================================================|\n";
        cout<<"|     3. Nhật Bản           ||          4. Đông Dương         |\n";
        cout<<"|=============================================================|\n";
		int cau13;
cauhoi13:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau13;
            if(cau13<0||cau13>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau13<0||cau13>4);
        
        if(cau13==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 5% \n 3 chiếm 75% \n 4 chiếm 15% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi13;
        }
        
        if(cau13==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Người ta thường gọi quốc gia nào là đất nước mặt trời mọc ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Nhật Bản \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==14)
    {
    	cout<<"\n\n  Ngọn núi nào cao nhất Nhật Bản  ? \n";
        cout<<"|===========================================================|\n";
        cout<<"|     1. Trường sơn           ||           2. everest       |\n";
        cout<<"|===========================================================|\n";
        cout<<"|     3. Phanxipang           ||           4. Phú sĩ        |\n";
        cout<<"|===========================================================|\n";
        int cau14;
        
cauhoi14:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau14;
            if(cau14<0||cau14>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau14<0||cau14>4);
        
        if(cau14==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 10% \n 3 chiếm 5% \n 4 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi14;
        }
        
        if(cau14==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Ngọn núi nào cao nhất Nhật Bản  ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Phú sĩ \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==15)
    {
    	cout<<"\n\n  Một cây làm chẳn nên non, .... cây chụm lại nên hòn núi cao ? \n";
        cout<<"|===========================================================|\n";
        cout<<"|     1. Bốn              ||            2. Ba               |\n";
        cout<<"|===========================================================|\n";
        cout<<"|     3. Tam              ||            4. Hai              |\n";
        cout<<"|===========================================================|\n";
        int cau15;
cauhoi15:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau15;
            if(cau15<0||cau15>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau15<0||cau15>4);
        
        if(cau15==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>3);
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp số đã được sử dụng\n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có câu trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {

                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {

                cout<<"\n\nđáp án 1 chiếm 15% \n 2 chiếm 80% \n 4 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi15;
        }
        
        if(cau15==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Một cây làm chẳn nên non, .... cây chụm lại nên hòn núi cao? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Ba \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==16)
    {
    	cout<<"\n\n  Thăng Long Hà Nội 1000 tuổi vào năm nào? \n";
        cout<<"|===========================================================|\n";
        cout<<"|     1. 2011               ||            2. 2010           |\n";
        cout<<"|===========================================================|\n";
        cout<<"|     3. 2015               ||            4. 2014           |\n";
        cout<<"|===========================================================|\n";
		int cau16;
cauhoi16:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau16;
            if(cau16<0||cau16>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau16<0||cau16>4);
        
        if(cau16==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 15% \n 2 chiếm 80% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi16;
        }
        
        if(cau16==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Thăng Long Hà Nội 1000 tuổi vào năm nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. 2010 \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==17)
    {
    	cout<<"\n\n  Tim của con người có bao nhiêu ngăn? \n";
        cout<<"|===========================================================|\n";
        cout<<"|        1. 1 ngăn            ||          2. 6 ngăn         |\n";
        cout<<"|===========================================================|\n";
        cout<<"|        3. 2 ngăn            ||          4. 4 ngăn         |\n";
        cout<<"|===========================================================|\n";
		int cau17;
cauhoi17:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau17;
            if(cau17<0||cau17>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau17<0||cau17>4);
        
        if(cau17==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 3 chiếm 30% \n 4 chiếm 65% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi17;
        }
        
        if(cau17==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Tim của con người có bao nhiêu ngăn? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. 4 ngăn \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==18)
    {
    	cout<<"\n\n  Giao điểm 3 đường trung trực của tam giác gọi là? \n";
        cout<<"|================================================================|\n";
        cout<<"|    1. Trực Tâm            ||     2. Tâm hình bình hành         |\n";
        cout<<"|================================================================|\n";
        cout<<"|    3. Tâm tam giác        ||     4. Tâm đường tròn ngoại tiếp  |\n";
        cout<<"|================================================================|\n";
		int cau18;
cauhoi18:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau18;
            if(cau18<0||cau18>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau18<0||cau18>4);
        
        if(cau18==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 15% \n 3 chiếm 5% \n 4 chiếm 80% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi18;
        }
        
        if(cau18==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Giao điểm 3 đường trung trực của tam giác gọi là? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4.  Tâm đường tròn ngoại tiếp\n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==19)
    {
    	cout<<"\n\n  Liên đoàn bóng đá Úc thuộc liên đoàn bóng đá nào ? \n";
        cout<<"|=============================================================|\n";
        cout<<"|    1. Châu Đại Dương         ||      2. Châu Á              |\n";
        cout<<"|=============================================================|\n";
        cout<<"|    3. Châu Âu                ||      4. Châu Phi            |\n";
        cout<<"|=============================================================|\n";
		int cau19;
cauhoi19:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau19;
            if(cau19<0||cau19>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau19<0||cau19>4);
        
        if(cau19==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 15% \n 2 chiếm 80% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi19;
        }
        
        if(cau19==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Liên đoàn bóng đá Úc thuộc liên đoàn bóng đá nào ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2.  Châu Á \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==20)
    {
    	cout<<"\n\n  Người Việt Nam đầu tiên bay vào vũ trụ ? \n";
        cout<<"|=============================================================|\n";
        cout<<"|    1. Văn Thanh            ||      2. Phạm Tuân             |\n";
        cout<<"|=============================================================|\n";
        cout<<"|    3. Hoàng Xuân Vinh      ||      4. Nguyễn Bá Thanh       |\n";
        cout<<"|=============================================================|\n";
		int cau20;
cauhoi20:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau20;
            if(cau20<0||cau20>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau20<0||cau20>4);
        
        if(cau20==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 15% \n 2 chiếm 80% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi20;
        }
        
        if(cau20==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Người Việt Nam đầu tiên bay vào vũ trụ ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Phạm Tuân\n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==21)
    {
    	cout<<"\n\n  Con số nào được xem là số xui xẻo với người Phương Tây  ? \n";
        cout<<"|===================================================|\n";
        cout<<"|      1. Số 8          ||         2. Số 4          |\n";
        cout<<"|===================================================|\n";
        cout<<"|      3. Số 13         ||         4. Số 7          |\n";
        cout<<"|===================================================|\n";
		int cau21;
cauhoi21:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau21;
            if(cau21<0||cau21>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau21<0||cau21>4);
        
        if(cau21==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 15% \n 2 chiếm 5% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi21;
        }
        
        if(cau21==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Con số nào được xem là số xui xẻo với người Phương Tây  ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3.  Số 13\n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==22)
    {
    	cout<<"\n\n  Năm 1910 Morgan đã chọn con gì làm thí nghiệm về di truyền ? \n";
        cout<<"|========================================================|\n";
        cout<<"|      1. Ruồi giấm         ||        2. Vi khuẩn        |\n";
        cout<<"|========================================================|\n";
        cout<<"|      3. muỗi              ||        4. Vi trùng        |\n";
        cout<<"|========================================================|\n";
		int cau22;
cauhoi22:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau22;
            if(cau22<0||cau22>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau22<0||cau22>4);
        
        if(cau22==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi22;
        }
        
        if(cau22==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Năm 1910 Morgan đã chọn con gì làm thí nghiệm về di truyền ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  Ruồi giấm   \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==23)
    {
    	cout<<"\n\n Động  Vật nào lớn nhất thế giới hiện nay ? \n";
        cout<<"|========================================================|\n";
        cout<<"|      1. Khủng long         ||        2. Cá voi xanh    |\n";
        cout<<"|========================================================|\n";
        cout<<"|      3. Con Người          ||        4. Con Voi        |\n";
        cout<<"|========================================================|\n";
		int cau23;
cauhoi23:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau23;
            if(cau23<0||cau23>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau23<0||cau23>4);
        
        if(cau23==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 15% \n 2 chiếm 80% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi23;
        }
        
        if(cau23==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n Động  Vật nào lớn nhất thế giới hiện nay ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2.  Cá Voi xanh  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==24)
    {
    	cout<<"\n\n  Nguyên tố hóa học có nhiều và phong phú nhất trong vỏ trái đất ? \n";
        cout<<"|=======================================================|\n";
        cout<<"|      1. Đá vôi         ||        2. Canxi             |\n";
        cout<<"|=======================================================|\n";
        cout<<"|      3. Nito           ||        4. Oxy               |\n";
        cout<<"|=======================================================|\n";
		int cau24;
cauhoi24:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau24;
            if(cau24<0||cau24>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau24<0||cau24>4);
        
        if(cau24==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 5% \n 3 chiếm 40% \n 4 chiếm 50% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi24;
        }
        
        if(cau24==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n Nguyên tố hóa học có nhiều và phong phú nhất trong vỏ trái đất ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4.  Oxy  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==25)
    {
    	cout<<"\n\n  Trên bề mặt của la bàn tử, hướng Nam được ký hiệu bằng chữ cái gì ? \n";
        cout<<"|=======================================================|\n";
        cout<<"|         1. W               ||        2. E             |\n";
        cout<<"|=======================================================|\n";
        cout<<"|         3. N               ||        4. S             |\n";
        cout<<"|=======================================================|\n";
        int cau25;
cauhoi25:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau25;
            if(cau25<0||cau25>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau25<0||cau25>4);
        
        if(cau25==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 5% \n 3 chiếm 5% \n 4 chiếm 85% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi25;
        }
        
        if(cau25==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Trên bề mặt của la bàn tử, hướng Nam được ký hiệu bằng chữ cái gì ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4.  S  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==26)
    {
    	cout<<"\n\n  Cây gì cho chúng ta sôcôla và được trồng ở Brazil ? \n";
        cout<<"|=======================================================|\n";
        cout<<"|      1. capuchino          ||        2. Cacao         |\n";
        cout<<"|=======================================================|\n";
        cout<<"|      3. Cafe               ||        4. chè           |\n";
        cout<<"|=======================================================|\n";
		int cau26;
cauhoi26:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau26;
            if(cau26<0||cau26>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau26<0||cau26>4);
        
        if(cau26==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 20% \n 2 chiếm 75% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi26;
        }
        
        if(cau26==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Cây gì cho chúng ta sôcôla và được trồng ở Brazil ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2.  Cacao  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==27)
    {
    	cout<<"\n\n  Nước ta chính thức lấy tên Cộng Hòa Xã Hội Chủ Nghĩa Việt Nam vào năm nào ? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. 1976          ||        2. 1975            |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. 1945          ||        4. 2000            |\n";
        cout<<"|====================================================|\n";
		int cau27;
cauhoi27:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau27;
            if(cau27<0||cau27>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau27<0||cau27>4);
        
        if(cau27==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi27;
        }
        
        if(cau27==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Nước ta chính thức lấy tên Cộng Hòa Xã Hội Chủ Nghĩa Việt Nam vào năm nào ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  1976  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==28)
    {
    	cout<<"\n\n  Công thức hóa học của Oxi già là gì ? \n";
        cout<<"|============================================|\n";
        cout<<"|      1. O2           ||       2. O3        |\n";
        cout<<"|============================================|\n";
        cout<<"|      3. H2O2         ||       4. H2O       |\n";
        cout<<"|============================================|\n";
		int cau28;
cauhoi28:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau28;
            if(cau28<0||cau28>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau28<0||cau28>4);
        
        if(cau28==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi28;
        }
        
        if(cau28==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Công thức hóa học của Oxi già là gì ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3.  H2O2  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==29)
    {
    	cout<<"\n\n  Urê là loại phân nào ? \n";
        cout<<"|=============================================|\n";
        cout<<"|     1. Phân NPK     ||     2. Phân lân      |\n";
        cout<<"|=============================================|\n";
        cout<<"|=============================================|\n";
        cout<<"|    3. Phân đạm      ||     4. Phân kali     |\n";
        cout<<"|=============================================|\n";
		int cau29;
cauhoi29:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau29;
            if(cau29<0||cau29>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau29<0||cau29>4);
        
        if(cau29==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi29;
        }
        
        if(cau29==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n    Urê là loại phân nào ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3.  Phân Đạm  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==30)
    {
    	cout<<"\n\n Ai là cha đẻ của thuyết tương đối ? \n";
        cout<<"|=======================================|\n";
        cout<<"|  1. Newton         ||   2. AnhXtanh   |\n";
        cout<<"|=======================================|\n";
        cout<<"|  3. Oasinhton      ||   4. Dacuyn     |\n";
        cout<<"|=======================================|\n";
		int cau30;
cauhoi30:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau30;
            if(cau30<0||cau30>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau30<0||cau30>4);
        
        if(cau30==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 15% \n 2 chiếm 80% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi30;
        }
        
        if(cau30==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n Ai là cha đẻ của thuyết tương đối ? \n";
            cout<<" Đáp án đúng là: \n";
            cout<<" 2. AnhXtanh \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==31)
    {
    	cout<<"\n\n  Theo câu ca dao xưa thì: \"Một chục quả hồng nuốt... \" gì? \n";
        cout<<"|====================================================|\n";
        cout<<"|   1. Lão chín mươi      ||   2. Lão tám mươi       |\n";
        cout<<"|====================================================|\n";
        cout<<"|   3. Lão bảy mươi       ||   4. Lão sáu mươi       |\n";
        cout<<"|====================================================|\n";
		int cau31;
cauhoi31:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau31;
            if(cau31<0||cau31>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau31<0||cau31>4);
        
        if(cau31==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 15% \n 2 chiếm 70% \n 3 chiếm 5% \n 4 chiếm 10% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi31;
        }
        
        if(cau31==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Theo câu ca dao xưa thì: \"Một chục quả hồng nuốt... \" gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2.  Lão tám mươi  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==32)
    {
    	cout<<"\n\n  El Nino là gì? \n";
        cout<<"|====================================================|\n";
        cout<<"| 1. Một món ăn              ||   2. Một loại cây    |\n";
        cout<<"|====================================================|\n";
        cout<<"| 3. Một hiện tư�ợng th�ời ti�ết||   4. Một đia danh    |\n";
        cout<<"|====================================================|\n";
		int cau32;
cauhoi32:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau32;
            if(cau32<0||cau32>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau32<0||cau32>4);
        
        if(cau32==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi32;
        }
        
        if(cau32==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  El Nino là gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. M��t th�ời ti�ết  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==33)
    {
    	cout<<"\n\n  Nòng nọc xu�ất hiện trong vòng ���i của loài nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|       1. �Ếch           ||        2. T�ằm            |\n";
        cout<<"|====================================================|\n";
        cout<<"|       3. R�ắn           ||        4. Bướm           |\n";
        cout<<"|====================================================|\n";
		int cau33;
cauhoi33:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau33;
            if(cau33<0||cau33>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau33<0||cau33>4);
        
        if(cau33==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi33;
        }
        
        if(cau33==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Nòng nọc xu�ất hiện trong vòng ���i của loài nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  �Ếch  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==34)
    {
    	cout<<"\n\n  \"Lão Hạc\" là truyện ng�ắn của tác giả nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Xuân Quỳnh       ||       2. Tô Hoài       |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Nguyên Hồng      ||       4. Nam Cao       |\n";
        cout<<"|====================================================|\n";
		int cau34;
cauhoi34:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau34;
            if(cau34<0||cau34>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau34<0||cau34>4);
        
        if(cau34==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 10% \n 2 chiếm 15% \n 3 chiếm 5% \n 4 chiếm 70% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi34;
        }
        
        if(cau34==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  \"Lão Hạc\" là truyện ng�ắn của tác giả nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Nam Cao  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------


	if(ch==35)
    {
    	cout<<"\n\n  T�ừ nào sau đây khác nghĩa với 3 t�ừ còn lại? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Sinh nở          ||      2. Sinh sôi       |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Sinh trưởng      ||      4. Sinh viên      |\n";
        cout<<"|====================================================|\n";
		int cau35;
cauhoi35:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau35;
            if(cau35<0||cau35>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau35<0||cau35>4);
        
        if(cau35==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi35;
        }
        
        if(cau35==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  T�ừ nào sau đây khác nghĩa với 3 t�ừ còn lại? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Sinh viên  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==36)
    {
    	cout<<"\n\n  Mưa ngâu là vào khoảng tháng m�ấy âm lich trong n�m? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Tháng 1         ||        2. Tháng 3       |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Tháng 7         ||        4. Tháng 11      |\n";
        cout<<"|====================================================|\n";
		int cau36;
cauhoi36:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau36;
            if(cau36<0||cau36>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau36<0||cau36>4);
        
        if(cau36==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi36;
        }
        
        if(cau36==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Mưa ngâu là vào khoảng tháng m�ấy âm lich trong n�m? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Tháng 7  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==37)
    {
    	cout<<"\n\n  Pha màu đỏ với màu xanh lam, ta đư�ợc màu nào sau đây? \n";
        cout<<"|====================================================|\n";
        cout<<"|        1. Nâu          ||        2. Tím            |\n";
        cout<<"|====================================================|\n";
        cout<<"|        3. Hồng         ||        4. Đen            |\n";
        cout<<"|====================================================|\n";
		int cau37;
cauhoi37:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau37;
            if(cau37<0||cau37>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau37<0||cau37>4);
        
        if(cau37==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi37;
        }
        
        if(cau37==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Pha màu đỏ với màu xanh lam, ta đư�ợc màu nào sau đây? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Tím  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==38)
    {
    	cout<<"\n\n  Ngày sinh của Ph�ật Thích Ca Mâu Ni còn đư�ợc gọi là ngày gì? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Ph�ật giáo        ||       2. Ph�ật đản      |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Ph�ật pháp        ||       4. Ph�ật t�ử       |\n";
        cout<<"|====================================================|\n";
		int cau38;
cauhoi38:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau38;
            if(cau38<0||cau38>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau38<0||cau38>4);
        
        if(cau38==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi38;
        }
        
        if(cau38==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Ngày sinh của Ph�ật Thích Ca Mâu Ni còn đư�ợc gọi là ngày gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Ph�ật đản  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==39)
    {
    	cout<<"\n\n  \"Đồng Đăng có phố Kỳ L�ừa, có nàng Tô Thi, có chùa... \" gì?  \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Thiên Mụ       ||       2. Ph�ật Tích       |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Tam Thanh      ||       4. Một Cột         |\n";
        cout<<"|====================================================|\n";
		int cau39;
cauhoi39:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau39;
            if(cau39<0||cau39>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau39<0||cau39>4);
        
        if(cau39==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 15% \n 3 chiếm 80% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi39;
        }
        
        if(cau39==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  \"Đồng Đăng có phố Kỳ L�ừa, có nàng Tô Thi, có chùa... \" gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Tam Thanh  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==40)
    {
    	cout<<"\n\n  Dân ca Quan họ là di sản văn hóa của tỉnh nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. B�ắc Ninh         ||       2. B�ắc Giang     |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Quảng Ninh       ||       4. Hu�ế           |\n";
        cout<<"|====================================================|\n";
		int cau40;
cauhoi40:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau40;
            if(cau40<0||cau40>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau40<0||cau40>4);
        
        if(cau40==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 80% \n 2 chiếm 15% \n 3 chiếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi40;
        }
        
        if(cau40==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Dân ca Quan họ là di sản văn hóa của tỉnh nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  B�ắc Ninh  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==41)
    {
    	cout<<"\n\n  Đương kim Tổng thống Mỹ Barack Obama đã trải qua tuổi thơ ở đất nước Đông Nam Á nào? \n";
        cout<<"|======================================================|\n";
        cout<<"|      1. Indonesia        ||      2. Thai Lan         |\n";
        cout<<"|======================================================|\n";
        cout<<"|      3. Viet Nam         ||      4. Singapore        |\n";
        cout<<"|======================================================|\n";
		int cau41;
cauhoi41:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau41;
            if(cau41<0||cau41>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau41<0||cau41>4);
        
        if(cau41==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 50% \n 2 chiếm 20% \n 3 chiếm 10% \n 4 chi�ếm 20% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi41;
        }
        
        if(cau41==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Đương kim Tổng thống Mỹ Barack Obama đã trải qua tuổi thơ ở đất nước Đông Nam Á nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  Indonesia  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==42)
    {
    	cout<<"\n\n  Cầu Phú Mỹ - cây cầu đẹp và hiện đại nhất thành phố Hồ Chí Minh có hình dáng của chữ cái nào ? \n";
        cout<<"|============================================|\n";
        cout<<"|      1. M           ||       2. T          |\n";
        cout<<"|============================================|\n";
        cout<<"|      3. H           ||       4. L          |\n";
        cout<<"|============================================|\n";
		int cau42;
cauhoi42:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau42;
            if(cau42<0||cau42>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau42<0||cau42>4);
        
        if(cau42==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 5% \n 2 chiếm 5% \n 3 chiếm 45% \n 4 chi�ếm 45%";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi42;
        }
        
        if(cau42==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Cầu Phú Mỹ - cây cầu đẹp và hiện đại nhất thành phố Hồ Chí Minh có hình dáng của chữ cái nào ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3.  H  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==43)
    {
    	cout<<"\n\n  Các trung tâm công nghiệp lớn như Tokyo, Kyoto, Yokohama, Nagoia, Osaka… ";
        cout<<"\n  nằm trên hòn đảo nào có diện tích rộng nhất, dân số đông nhất ";
        cout<<"\n  và kinh tế phát triển nhất trong quần đảo Nhật Bản? \n";
		cout<<"|===============================================|\n";
        cout<<"|      1. Honsu         ||       2. Shikoku     |\n";
        cout<<"|===============================================|\n";
        cout<<"|      3. Kyusyu        ||       4. Hokkaido    |\n";
        cout<<"|===============================================|\n";
		int cau43;
cauhoi43:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau43;
            if(cau43<0||cau43>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau43<0||cau43>4);
        
        if(cau43==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 40% \n 2 chiếm 25% \n 3 chiếm 30% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi43;
        }
        
        if(cau43==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Các trung tâm công nghiệp lớn như Tokyo, Kyoto, Yokohama, Nagoia, Osaka… ";
        	cout<<"\n  nằm trên hòn đảo nào có diện tích rộng nhất, dân số đông nhất ";
        	cout<<"\n  và kinh tế phát triển nhất trong quần đảo Nhật Bản? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  Honsu  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==44)
    {
    	cout<<"\n\n  Tượng đài chiến thắng điện Biên Phủ được dựng ở ngọn đồi nào? \n";
        cout<<"|=============================================|\n";
        cout<<"|      1. A1         ||       2. B1           |\n";
        cout<<"|=============================================|\n";
        cout<<"|      3. D1        ||        4. C1           |\n";
        cout<<"|=============================================|\n";
		int cau44;
cauhoi44:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau44;
            if(cau44<0||cau44>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau44<0||cau44>4);
        
        if(cau44==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 40 \n 2 chiếm 5% \n 3 chiếm 40% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi44;
        }
        
        if(cau44==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Tượng đài chiến thắng điện Biên Phủ được dựng ở ngọn đồi nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3.  D1  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==45)
    {
    	cout<<"\n\n  Hành tinh nào trong Hệ Mặt Trời có chu kỳ tự quay quanh trục \n  và độ nghiêng gần giống Trái Đất nhất? \n";
        cout<<"|=============================================|\n";
        cout<<"|     1. Sao Thủy     ||     2. Sao Kim       |\n";
        cout<<"|=============================================|\n";
        cout<<"|    3. Sao Mộc       ||     4. Sao Hỏa       |\n";
        cout<<"|=============================================|\n";
		int cau45;
cauhoi45:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau45;
            if(cau45<0||cau45>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau45<0||cau45>4);
        
        if(cau45==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 8% \n 2 chiếm 12% \n 3 chiếm 16% \n 4 chi�ếm 64% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi45;
        }
        
        if(cau45==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Hành tinh nào trong Hệ Mặt Trời có chu kỳ tự quay quanh trục \n  và độ nghiêng gần giống Trái Đất nhất?\n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4.  Sao Hỏa     \n";
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==46)
    {
    	cout<<"\n\n  Trong truyện Kiều, khi gặp Thúy Kiều lần đầu tiên, Kim Trọng cưỡi ngựa gì? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Ngựa Xích Thố    ||       2. Ngựa ô        |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Bạch mã          ||       4. Ngựa vằn      |\n";
        cout<<"|====================================================|\n";
		int cau46;
cauhoi46:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau46;
            if(cau46<0||cau46>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau46<0||cau46>4);
        
        if(cau46==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 32% \n 2 chiếm 7% \n 3 chiếm 52% \n 4 chiếm 9% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi46;
        }
        
        if(cau46==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Trong truyện Kiều, khi gặp Thúy Kiều lần đầu tiên, Kim Trọng cưỡi ngựa gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Bạch mã  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==47)
    {
    	cout<<"\n\n  Chùa Một Cột có phiên bản nhái ở HCM và ở đâu? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Trung Quốc      ||        2. Pháp          |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Cuba            ||        4. Nga           |\n";
        cout<<"|====================================================|\n";
		int cau47;
cauhoi47:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau47;
            if(cau47<0||cau47>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau47<0||cau47>4);
        
        if(cau47==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 42% \n 2 chiếm 3% \n 3 chiếm 4% \n 4 chi�ếm 51% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi47;
        }
        
        if(cau47==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Chùa Một Cột có phiên bản nhái ở HCM và ở đâu? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Nga  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==48)
    {
    	cout<<"\n\n  Ngày chủ nh�ật của tu�ần th�ứ 3 tháng 6 hàng năm là ngày gì? \n";
        cout<<"|====================================================|\n";
        cout<<"|    1. Ngày của con    ||     2. Ngày gia đình      |\n";
        cout<<"|====================================================|\n";
        cout<<"|    3. Ngày của mẹ     ||     4. Ngày của cha       |\n";
        cout<<"|====================================================|\n";
		int cau48;
cauhoi48:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau48;
            if(cau48<0||cau48>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau48<0||cau48>4);
        
        if(cau48==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 10% \n 2 chiếm 18% \n 3 chiếm 35% \n 4 chi�ếm 37% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi48;
        }
        
        if(cau48==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Ngày chủ nh�ật của tu�ần th�ứ 3 tháng 6 hàng năm là ngày gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Ngày của cha  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==49)
    {
    	cout<<"\n\n  Đ�ập thủy điện to nh�ất hiện nay là gì? \n";
        cout<<"|====================================================|\n";
        cout<<"|  1. Đ�ập Tam Hiệp(TQ)  ||  2. Đ�ập Itaipu(brazil)    |\n";
        cout<<"|====================================================|\n";
        cout<<"|  3. Đ�ập Xiluodu(TQ)   ||  4. Đ�ập Grand Coulee(Mỹ)  |\n";
        cout<<"|====================================================|\n";
		int cau49;
cauhoi49:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau49;
            if(cau49<0||cau49>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau49<0||cau49>4);
        
        if(cau49==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 41% \n 2 chiếm 20% \n 3 chiếm 22% \n 4 chi�ếm 17% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi49;
        }
        
        if(cau49==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Đ�ập thủy điện to nh�ất hiện nay là gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  Đ�ập Tam Hiệp  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==50)
    {
    	cout<<"\n\n  Phủ Tây Hô Hà Nội ngày nay th�ờ ai? \n";
        cout<<"|====================================================|\n";
        cout<<"|    1. M�ẫu Liẽu Hạnh      ||    2. Thánh Gióng      |\n";
        cout<<"|====================================================|\n";
        cout<<"|    3. Tr�ần Hưng Đạo      ||    4. Ch�ử Đồng T�ử      |\n";
        cout<<"|====================================================|\n";
		int cau50;
cauhoi50:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau50;
            if(cau50<0||cau50>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau50<0||cau50>4);
        
        if(cau50==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 48% \n 2 chiếm 26% \n 3 chiếm 14% \n 4 chi�ếm 12% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi50;
        }
        
        if(cau50==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Phủ Tây Hô Hà Nội ngày nay th�ờ ai? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1. M�ẫu Liẽu Hạnh  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==51)
    {
    	cout<<"\n\n Cờ đỏ sao vàng lần đầu tiên xuất hiện tại cuộc khởi nghĩa nào? \n";
        cout<<"|=====================================================|\n";
        cout<<"|  1. Khởi nghĩa Ba Tơ    ||   2. Khởi nghĩa Nam Kỳ   |\n";
        cout<<"|=====================================================|\n";
        cout<<"|  3. Binh biến Đô Lương  ||   4. Khởi nghĩa Bắc Sơn  |\n";
        cout<<"|=====================================================|\n";
		int cau51;
cauhoi51:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau51;
            if(cau51<0||cau51>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau51<0||cau51>4);
        
        if(cau51==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 22% \n 2 chiếm 39% \n 3 chiếm 23% \n 4 chi�ếm 16% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi51;
        }
        
        if(cau51==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n Cờ đỏ sao vàng lần đầu tiên xuất hiện tại cuộc khởi nghĩa nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Khởi nghĩa Nam Kỳ   \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==52)
    {
    	cout<<"\n\n  Thành Long Biên được ai chọn làm kinh đô ? \n";
        cout<<"|==================================================|\n";
        cout<<"|     1. Lý Nam Đế      ||   2. An Dương Vương     |\n";
        cout<<"|==================================================|\n";
        cout<<"|     3. Ngô Quyền      ||   4. Đinh Tiên Hoàng    |\n";
        cout<<"|==================================================|\n";
		int cau52;
cauhoi52:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau52;
            if(cau52<0||cau52>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau52<0||cau52>4);
        
        if(cau52==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 41% \n 2 chiếm 15% \n 3 chiếm 14% \n 4 chi�ếm 30% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi52;
        }
        
        if(cau52==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Thành Long Biên được ai chọn làm kinh đô ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"    1. Lý Nam Đế       \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==53)
    {
    	cout<<"\n\n    Ngày lễ nào sau đây tính theo âm lịch? \n";
        cout<<"|=========================================================================|\n";
        cout<<"|  1. Ngày sân khấu Việt Nam     ||  2. Ngày âm nhạc Việt Nam             |\n";
        cout<<"|=========================================================================|\n";
        cout<<"|  3. Ngày thể thao Việt Nam     ||  4. Ngày văn hóa các dân tộc Việt Nam |\n";
        cout<<"|=========================================================================|\n";
		int cau53;
cauhoi53:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau53;
            if(cau53<0||cau53>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau53<0||cau53>4);
        
        if(cau53==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 40% \n 2 chiếm 25% \n 3 chiếm 30% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi53;
        }
        
        if(cau53==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n    Ngày lễ nào sau đây tính theo âm lịch? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<" 1. Ngày sân khấu Việt Nam  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==54)
    {
    	cout<<"\n\n  Cơ quan nào của hệ thần kinh là trung tâm của những phản xạ thăng bằng? \n";
        cout<<"|==========================================|\n";
        cout<<"|     1. Gian não     ||     2. Não bộ     |\n";
        cout<<"|==========================================|\n";
        cout<<"|    3. Tiểu não     ||     4. Hành não    |\n";
        cout<<"|==========================================|\n";
		int cau54;
cauhoi54:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau54;
            if(cau54<0||cau54>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau54<0||cau54>4);
        
        if(cau54==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 21% \n 2 chiếm 22% \n 3 chiếm 33% \n 4 chi�ếm 24% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi54;
        }
        
        if(cau54==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Cơ quan nào của hệ thần kinh là trung tâm của những phản xạ thăng bằng? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"   3.  Tiểu não      \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==55)
    {
    	cout<<"\n\n    Ngày 23/4 hằng năm được UNESO chọn là \" Ngày thế giới .... \" làm gì? \n";
        cout<<"|==========================================|\n";
        cout<<"|    1. Du lịch      ||     2. Giải trí    |\n";
        cout<<"|==========================================|\n";
        cout<<"|    3. Ăn uống      ||     4. Đọc sách    |\n";
        cout<<"|==========================================|\n";
		int cau55;
cauhoi55:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau55;
            if(cau55<0||cau55>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau55<0||cau55>4);
        
        if(cau55==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 24% \n 2 chiếm 21% \n 3 chiếm 27% \n 4 chi�ếm 28% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi55;
        }
        
        if(cau55==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n    Ngày 23/4 hằng năm được UNESO chọn là \" Ngày thế giới .... \" làm gì? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"    4. Đọc sách      \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==56)
    {
    	cout<<"\n\n CLB nào vô địch Champion League mùa bóng 2015-2016? \n";
        cout<<"|===============================================|\n";
        cout<<"|  1. Manchester United  ||   2. Real Madrid    |\n";
        cout<<"|===============================================|\n";
        cout<<"|  3. Barcelona          ||   4. 1 Schalke 04   |\n";
        cout<<"|===============================================|\n";
		int cau56;
cauhoi56:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau56;
            if(cau56<0||cau56>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau56<0||cau56>4);
        
        if(cau56==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 7% \n 2 chiếm 82% \n 3 chiếm 9% \n 4 chi�ếm 2% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi56;
        }
        
        if(cau56==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n CLB nào vô địch Champion League mùa bóng 2015-2016? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"   2. Real Madrid    \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==57)
    {
    	cout<<"\n\nTên tuổi của nhạc sỹ thiên tài so-panh gắn liền với loại nhạc cụ nào? \n";
        cout<<"|==================================|\n";
        cout<<"|  1. piano     ||   2. vĩ cầm     |\n";
        cout<<"|==================================|\n";
        cout<<"|  3. organ     ||   4. violon     |\n";
        cout<<"|==================================|\n";
		int cau57;
cauhoi57:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau57;
            if(cau57<0||cau57>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau57<0||cau57>4);
        
        if(cau57==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 30% \n 2 chiếm 31% \n 3 chiếm 18% \n 4 chi�ếm 21% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi57;
        }
        
        if(cau57==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\nTên tuổi của nhạc sỹ thiên tài so-panh gắn liền với loại nhạc cụ nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"   1. piano   \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==58)
    {
    	cout<<"\n\n  Sông B�ến Hải n�ằm ở tỉnh nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Quảng Ngãi      ||      2. Quảng Tri       |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Quảng Ninh      ||      4. Quảng Nam       |\n";
        cout<<"|====================================================|\n";
		int cau58;
cauhoi58:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau58;
            if(cau58<0||cau58>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau58<0||cau58>4);
        
        if(cau58==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 25% \n 2 chiếm 25% \n 3 chiếm 25% \n 4 chi�ếm 25% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi58;
        }
        
        if(cau58==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Sông B�ến Hải n�ằm ở tỉnh nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Quảng Tri  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==59)
    {
    	cout<<"\n\n Trạng thái được coi là trạng thái thứ tư sau rắn lỏng khí ? \n";
        cout<<"|===================================|\n";
        cout<<"|  1. Metan       ||    2. Plasma   |\n";
        cout<<"|===================================|\n";
        cout<<"|  3. Plastit     ||    4. Amoniac  |\n";
        cout<<"|===================================|\n";
		int cau59;
cauhoi59:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau59;
            if(cau59<0||cau59>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau59<0||cau59>4);
        
        if(cau59==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 25% \n 2 chiếm 40% \n 3 chiếm 27% \n 4 chi�ếm 8% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi59;
        }
        
        if(cau59==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n Trạng thái được coi là trạng thái thứ tư sau rắn lỏng khí ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Plasma   \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==60)
    {
    	cout<<"\n\n  Bộ phim \"Marley and me\" nói v�ề tình bạn của con ngư�ời và loài v�ật nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|        1. L�ợn          ||        2. Chó            |\n";
        cout<<"|====================================================|\n";
        cout<<"|        3. Mèo          ||        4. Thỏ            |\n";
        cout<<"|====================================================|\n";
		int cau60;
cauhoi60:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau60;
            if(cau60<0||cau60>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau60<0||cau60>4);
        
        if(cau60==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 18% \n 2 chiếm 32% \n 3 chiếm 34% \n 4 chi�ếm 16% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi60;
        }
        
        if(cau60==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Bộ phim \"Marley and me\" nói v�ề tình bạn của con ngư�ời và loài v�ật nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Chó  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==61)
    {
    	cout<<"\n\n Ngôi đền nào của Ấn Độ là biểu tượng tình yêu vĩnh cửu ? \n";
        cout<<"|======================================|\n";
        cout<<"|   1. Khajuraho    ||    2. Ellora    |\n";
        cout<<"|======================================|\n";
        cout<<"|   3. Ta Mahal     ||    4. Konark    |\n";
        cout<<"|======================================|\n";
		int cau61;
cauhoi61:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau61;
            if(cau61<0||cau61>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau61<0||cau61>4);
        
        if(cau61==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 18% \n 2 chiếm 14% \n 3 chiếm 47% \n 4 chi�ếm 21% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi61;
        }
        
        if(cau61==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n Ngôi đền nào của Ấn Độ là biểu tượng tình yêu vĩnh cửu ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<" 3. Ta Mahal  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==62)
    {
    	cout<<"\n\n  Bối cảnh của câu chuyện tình Romeo và Juliet là thành phố nào của nước Ý? \n";
        cout<<"|=======================================|\n";
        cout<<"|  1. Verona        ||   2. Rome        |\n";
        cout<<"|=======================================|\n";
        cout<<"|  3. Milan         ||   4. Venice      |\n";
        cout<<"|=======================================|\n";
		int cau62;
cauhoi62:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau62;
            if(cau62<0||cau62>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau62<0||cau62>4);
        
        if(cau62==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 40% \n 2 chiếm 25% \n 3 chiếm 30% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi62;
        }
        
        if(cau62==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Bối cảnh của câu chuyện tình Romeo và Juliet là thành phố nào của nước Ý? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<" 1. Verona     \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==63)
    {
    	cout<<"\n\n  Rét nàng Bân thuư�ờng xảy ra vào ngày tháng m�ấy âm lich? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Tháng 5        ||       2. Tháng 7         |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Tháng 1        ||       4. Tháng 3         |\n";
        cout<<"|====================================================|\n";
		int cau63;
cauhoi63:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau63;
            if(cau63<0||cau63>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau63<0||cau63>4);
        
        if(cau63==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 11% \n 2 chiếm 37% \n 3 chiếm 16% \n 4 chi�ếm 36% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi63;
        }
        
        if(cau63==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Rét nàng Bân thuư�ờng xảy ra vào ngày tháng m�ấy âm lich? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Tháng 3  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==64)
    {
    	cout<<"\n\n  Đèo Hải Vân c�ắt ngang dãy núi nào của Trư�ờng Sơn? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Con Voi         ||       2. Bà Đen         |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Bạch Mã         ||       4. Hòn Tro        |\n";
        cout<<"|====================================================|\n";
		int cau64;
cauhoi64:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau64;
            if(cau64<0||cau64>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau64<0||cau64>4);
        
        if(cau64==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 55% \n 2 chiếm 17% \n 3 chiếm 14% \n 4 chi�ếm 14% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi64;
        }
        
        if(cau64==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Đèo Hải Vân c�ắt ngang dãy núi nào của Trư�ờng Sơn? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Bạch Mã  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==65)
    {
    	cout<<"\n\n  Trên quốc huy của nước ta hình ảnh nào tư�ợng trưng cho công nghiệp? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Bánh răng       ||       2. Lúa            |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Máy             ||       4. Sao vàng       |\n";
        cout<<"|====================================================|\n";
		int cau65;
cauhoi65:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau65;
            if(cau65<0||cau65>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau65<0||cau65>4);
        
        if(cau65==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 35% \n 2 chiếm 25% \n 3 chiếm 35% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi65;
        }
        
        if(cau65==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Trên quốc huy của nước ta hình ảnh nào tư�ợng trưng cho công nghiệp? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1. Bánh răng  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==66)
    {
    	cout<<"\n\n  Thương cảng nào là thương cảng đ�ầu tiên của nước ta? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Vân Đ�ồn        ||       2. Hải Phòng       |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Vũng Tàu       ||       4. Vân Phong       |\n";
        cout<<"|====================================================|\n";
		int cau66;
cauhoi66:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau66;
            if(cau66<0||cau66>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau66<0||cau66>4);
        
        if(cau66==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 61% \n 2 chiếm 6% \n 3 chiếm 5% \n 4 chi�ếm 28% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi66;
        }
        
        if(cau66==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Thương cảng nào là thương cảng đ�ầu tiên của nước ta? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  Vân Đ�ồn  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==67)
    {
    	cout<<"\n\n  Trong lãnh thổ Italia có bao nhiêu quốc gia độc l�ập? \n";
        cout<<"|==============================================|\n";
        cout<<"|        1. 3         ||        2. 2           |\n";
        cout<<"|==============================================|\n";
        cout<<"|        3. 1         ||        4. 0           |\n";
        cout<<"|==============================================|\n";
		int cau67;
cauhoi67:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau67;
            if(cau67<0||cau67>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau67<0||cau67>4);
        
        if(cau67==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 3% \n 2 chiếm 50% \n 3 chiếm 42% \n 4 chi�ếm 6% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi67;
        }
        
        if(cau67==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Trong lãnh thổ Italia có bao nhiêu quốc gia độc l�ập? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2.  2  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==68)
    {
    	cout<<"\n\n  EURO l�ần đ�ầu tiên đư�ợc tổ� ch�ức tại quốc gia nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|        1. Anh           ||        2. Brazil�        |\n";
        cout<<"|====================================================|\n";
        cout<<"|        3. Pháp          ||        4. Nga           |\n";
        cout<<"|====================================================|\n";
		int cau68;
cauhoi68:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau68;
            if(cau68<0||cau68>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau68<0||cau68>4);
        
        if(cau68==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 18% \n 2 chiếm 11% \n 3 chiếm 49% \n 4 chi�ếm 22% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi68;
        }
        
        if(cau68==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  EURO l�ần đ�ầu tiên đư�ợc tổ� ch�ức tại quốc gia nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Pháp  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==69)
    {
    	cout<<"\n\n  Ai là người đặt tên Thái Bình Dương ? \n";
        cout<<"|============================================|\n";
        cout<<"|  1. Yuri Gagarin        ||   2. Kervin     |\n";
        cout<<"|============================================|\n";
        cout<<"|  3. Heinz Stucke       ||   4. Magellan    |\n";
        cout<<"|============================================|\n";
		int cau69;
cauhoi69:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau69;
            if(cau69<0||cau69>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau69<0||cau69>4);
        
        if(cau69==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 0% \n 2 chiếm 46% \n 3 chiếm 6% \n 4 chi�ếm 48% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi69;
        }
        
        if(cau69==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Ai là người đặt tên Thái Bình Dương ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<" 4. Magellan   \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==70)
    {
    	cout<<"\n\n  Đất nước nào có bảng chữ cái 76 chữ ? \n";
        cout<<"|==========================================|\n";
        cout<<"|  1. Lào             ||   2. Campuchia    |\n";
        cout<<"|==========================================|\n";
        cout<<"|  3. Trung Quốc      ||   4. Nhật Bản     |\n";
        cout<<"|==========================================|\n";
		int cau70;
cauhoi70:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau70;
            if(cau70<0||cau70>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau70<0||cau70>4);
        
        if(cau70==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 38% \n 2 chiếm 35% \n 3 chiếm 11% \n 4 chi�ếm 16% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi70;
        }
        
        if(cau70==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Đất nước nào có bảng chữ cái 76 chữ ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<" 2. Campuchia  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==71)
    {
    	cout<<"\n\n  Hiệp khí đạo là tên khác của môn võ nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Taekwondo      ||       2. Nhu thu�ật       |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Karate         ||       4. Aikido          |\n";
        cout<<"|====================================================|\n";
		int cau71;
cauhoi71:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau71;
            if(cau71<0||cau71>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau71<0||cau71>4);
        
        if(cau71==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 8% \n 2 chiếm 35% \n 3 chiếm 21% \n 4 chi�ếm 36% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi71;
        }
        
        if(cau71==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Hiệp khí đạo là tên khác của môn võ nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Aikido  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==72)
    {
    	cout<<"\n\n  Sông Mekong chảy qua m�ấy nước? \n";
        cout<<"|================================================|\n";
        cout<<"|        1. 4          ||        2. 5            |\n";
        cout<<"|================================================|\n";
        cout<<"|        3. 6          ||        4. 7            |\n";
        cout<<"|================================================|\n";
		int cau72;
cauhoi72:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau72;
            if(cau72<0||cau72>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau72<0||cau72>4);
        
        if(cau72==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 9% \n 2 chiếm 25% \n 3 chiếm 40% \n 4 chi�ếm 26% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi72;
        }
        
        if(cau72==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Sông Mekong chảy qua m�ấy nước? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. 6  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==73)
    {
    	cout<<"\n\n  Quê Hương của hãng điện thoại NOKIA? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Hà Lan         ||       2. Nh�ật Bản        |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Ph�ần Lan       ||       4. Việt Nam        |\n";
        cout<<"|====================================================|\n";
		int cau73;
cauhoi73:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau73;
            if(cau73<0||cau73>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau73<0||cau73>4);
        
        if(cau73==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 26% \n 2 chiếm 30% \n 3 chiếm 30% \n 4 chi�ếm 14% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi73;
        }
        
        if(cau73==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Quê Hương của hãng điện thoại NOKIA? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Ph�ần Lan  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==74)
    {
    	cout<<"\n\n  Phong c�ầm là tên gọi khác của loại nhạc cụ nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Đàn chanh      ||       2. Arccodeon       |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Sáo            ||       4. Saxophone       |\n";
        cout<<"|====================================================|\n";
		int cau74;
cauhoi74:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau74;
            if(cau74<0||cau74>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau74<0||cau74>4);
        
        if(cau74==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 25% \n 2 chiếm 40% \n 3 chiếm 30% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi74;
        }
        
        if(cau74==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Phong c�ầm là tên gọi khác của loại nhạc cụ nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Arccodeon \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==75)
    {
    	cout<<"\n\n  Trụ sở chính của liên hợp quốc ? \n";
        cout<<"|====================================|\n";
        cout<<"|  1. Silicon     ||   2. Berlin     |\n";
        cout<<"|====================================|\n";
        cout<<"|  3. OaShingTon  ||   4. New York   |\n";
        cout<<"|====================================|\n";
		int cau75;
cauhoi75:
		do
        {
            cout<<"Chon t�ừ 1 ��ến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau75;
            if(cau75<0||cau75>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau75<0||cau75>4);
        
        if(cau75==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 10% \n 2 chiếm 25% \n 3 chiếm 30% \n 4 chi�ếm 35% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi75;
        }
        
        if(cau75==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Trụ sở chính của liên hợp quốc ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<" 2. New York    \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==76)
    {
    	cout<<"\n\n  GRU là tên vi�ết t�ắt cơ quan nào của Nga? \n";
        cout<<"|====================================================|\n";
        cout<<"|    1. Bộ nội vụ         ||    2. Bộ quốc phòng     |\n";
        cout<<"|====================================================|\n";
        cout<<"|    3. Quốc hội Nga      ||    4. Cơ quan tình báo  |\n";
        cout<<"|====================================================|\n";
		int cau76;
cauhoi76:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau76;
            if(cau76<0||cau76>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau76<0||cau76>4);
        
        if(cau76==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 22% \n 2 chiếm 20% \n 3 chiếm 27% \n 4 chi�ếm 31% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi76;
        }
        
        if(cau76==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  GRU là tên vi�ết t�ắt cơ quan nào của Nga? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4. Cơ quan tình báo  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==77)
    {
    	cout<<"\n\n  Trong các dân tộc sau, dân tộc nào có số người đông nhất? \n";
        cout<<"|=============================================|\n";
        cout<<"|      1. H'Mông     ||       2. Khmer        |\n";
        cout<<"|=============================================|\n";
        cout<<"|      3. Tày        ||        4. C1imon      |\n";
        cout<<"|=============================================|\n";
		int cau77;
cauhoi77:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau77;
            if(cau77<0||cau77>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau77<0||cau77>4);
        
        if(cau77==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 29% \n 2 chiếm 28% \n 3 chiếm 34% \n 4 chi�ếm 9% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi77;
        }
        
        if(cau77==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Trong các dân tộc sau, dân tộc nào có số người đông nhất? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3.  Tày  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==78)
    {
    	cout<<"\n\n  Đại hội Đảng VI diẽn ra vào năm nào?  \n";
        cout<<"|====================================================|\n";
        cout<<"|       1. 1986          ||       2. 1976            |\n";
        cout<<"|====================================================|\n";
        cout<<"|       3. 1980          ||       4. 1975            |\n";
        cout<<"|====================================================|\n";
		int cau78;
cauhoi78:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau78;
            if(cau78<0||cau78>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau78<0||cau78>4);
        
        if(cau78==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 40% \n 2 chiếm 25% \n 3 chiếm 30% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi78;
        }
        
        if(cau78==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Đại hội Đảng VI diẽn ra vào năm nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  1986  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==79)
    {
    	cout<<"\n\n  \"El Classico\" là tr�ận đ�ấu gi�ữa hai đội bóng nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|    1. Bayern-Dortmund   ||    2. Barca-Real        |\n";
        cout<<"|====================================================|\n";
        cout<<"|    3. Tot-Chelsea       ||    4. Liver-Man City    |\n";
        cout<<"|====================================================|\n";
		int cau79;
cauhoi79:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau79;
            if(cau79<0||cau79>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau79<0||cau79>4);
        
        if(cau79==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 14% \n 2 chiếm 56% \n 3 chiếm 16% \n 4 chi�ếm 14% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi79;
        }
        
        if(cau79==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  \"El Classico\" là tr�ận đ�ấu gi�ữa hai đội bóng nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2.  Barca-Real  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==80)
    {
    	cout<<"\n\n  \"Nh�ất Trí, nhì Vân, tam Lân, t�ứ C�ẩn\" là t�ứ đại bộ trong bộ môn nghệ thu�ật nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Hội họa        ||        2. Điêu kh�ắc      |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Múa            ||        4. Thơ            |\n";
        cout<<"|====================================================|\n";
		int cau80;
cauhoi80:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau80;
            if(cau80<0||cau80>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau80<0||cau80>4);
        
        if(cau80==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 3 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 40% \n 2 chiếm 21% \n 3 chiếm 16% \n 4 chi�ếm 13% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi80;
        }
        
        if(cau80==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  \"Nh�ất Trí, nhì Vân, tam Lân, t�ứ C�ẩn\" là t�ứ đại bộ trong bộ môn nghệ thu�ật nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  Hộ họa  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==81)
    {
    	cout<<"\n\n  Tượng đài chiến thắng điện Biên Phủ được dựng ở ngọn đồi nào ? \n";
        cout<<"|=============================================|\n";
        cout<<"|      1. A1         ||       2. B1           |\n";
        cout<<"|=============================================|\n";
        cout<<"|      3. D1         ||        4. C1          |\n";
        cout<<"|=============================================|\n";
        int cau81;
cauhoi81:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau81;
            if(cau81<0||cau81>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau81<0||cau81>4);
        
        if(cau81==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 50% \n 2 chiếm 4% \n 3 chiếm 26% \n 4 chi�ếm 20% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi81;
        }
        
        if(cau81==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Tượng đài chiến thắng điện Biên Phủ được dựng ở ngọn đồi nào ? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3.  D1  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==82)
    {
    	cout<<"\n\n  Thành Vạn An do ai xây d�ựng? \n";
        cout<<"|====================================================|\n";
        cout<<"|     1. Phùng Hưng       ||    2. Dương Đình Nghệ   |\n";
    	cout<<"|====================================================|\n";
        cout<<"|     3. Mai H�ắc Đ�ế       ||    4. Lý Nam Đ�ế         |\n";
        cout<<"|====================================================|\n";
		int cau82;
cauhoi82:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau82;
            if(cau82<0||cau82>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau82<0||cau82>4);
        
        if(cau82==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 22% \n 2 chiếm 14% \n 3 chiếm 38% \n 4 chi�ếm 26% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi82;
        }
        
        if(cau82==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Thành Vạn An do ai xây d�ựng? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Mai H�ắc Đ�ế  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==83)
    {
    	cout<<"\n\n  Bộ phim điện ảnh đ�ầu tiên đư�ợc trình chi�ếu vào ngày 28/12/1895 tại đ�ất nước nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|       1. Pháp          ||        2. Đ�ức            |\n";
        cout<<"|====================================================|\n";
        cout<<"|       3. Mỹ            ||        4. Anh            |\n";
        cout<<"|====================================================|\n";
		int cau83;
cauhoi83:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau83;
            if(cau83<0||cau83>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau83<0||cau83>4);
        
        if(cau83==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 40% \n 2 chiếm 25% \n 3 chiếm 30% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi83;
        }
        
        if(cau83==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Bộ phim điện ảnh đ�ầu tiên đư�ợc trình chi�ếu vào ngày 28/12/1895 tại đ�ất nước nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  Pháp  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==84)
    {
    	cout<<"\n\n  Họa sĩ nào sau đây không phải ngư�ời Ý? \n";
        cout<<"|====================================================|\n";
        cout<<"|    1. Pablo Picasso     ||    2. Leonardo De Vinci |\n";
        cout<<"|====================================================|\n";
        cout<<"|    3. Michelangelo      ||    4. Rafaedo           |\n";
        cout<<"|====================================================|\n";
		int cau84;
cauhoi84:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau84;
            if(cau84<0||cau84>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau84<0||cau84>4);
        
        if(cau84==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 66% \n 2 chiếm 2% \n 3 chiếm 19% \n 4 chi�ếm 13% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi84;
        }
        
        if(cau84==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Họa sĩ nào sau đây không phải ngư�ời Ý? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  Pablo Picasso  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==85)
    {
    	cout<<"\n\n  Tay đua đã lên ngôi vô đ�?ch giải Tour de France 2015 là ngư�ời nước nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|        1. Anh           ||        2. Pháp          |\n";
        cout<<"|====================================================|\n";
        cout<<"|       3. Tây Ban Nha    ||        4. Ý             |\n";
        cout<<"|====================================================|\n";
		int cau85;
cauhoi85:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau85;
            if(cau85<0||cau85>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau85<0||cau85>4);
        
        if(cau85==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 1 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 40% \n 2 chiếm 25% \n 3 chiếm 30% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi85;
        }
        
        if(cau85==1) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Tay đua đã lên ngôi vô đ�?ch giải Tour de France 2015 là ngư�ời nước nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  1.  Anh  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==86)
    {
    	cout<<"\n\n  Việt Nam đã chính th�ức đư�ợc k�ết nạp thành viên WTO vào ngày tháng năm nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. 23/2/2005       ||       2. 6/12/2004      |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. 7/11/2006       ||       4. 28/7/2003      |\n";
        cout<<"|====================================================|\n";
		int cau86;
cauhoi86:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau86;
            if(cau86<0||cau86>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau86<0||cau86>4);
        
        if(cau86==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 40% \n 2 chiếm 25% \n 3 chiếm 30% \n 4 chi�ếm 5% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi86;
        }
        
        if(cau86==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Việt Nam đã chính th�ức đư�ợc k�ết nạp thành viên WTO vào ngày tháng năm nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3.  7/11/2006  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==87)
    {
    	cout<<"\n\n  Đàn Tơ rưng là nhạc cụ của dân tộc nào? \n";
        cout<<"|====================================================|\n";
        cout<<"|       1. H'mông         ||        2. Tày           |\n";
        cout<<"|====================================================|\n";
        cout<<"|       3. BaNa           ||        4. Thái          |\n";
        cout<<"|====================================================|\n";
		int cau87;
cauhoi87:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau87;
            if(cau87<0||cau87>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau87<0||cau87>4);
        
        if(cau87==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 37% \n 2 chiếm 17% \n 3 chiếm 42% \n 4 chi�ếm 4% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi87;
        }
        
        if(cau87==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Đàn Tơ rưng là nhạc cụ của dân tộc nào? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. BaNa  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==88)
    {
    	cout<<"\n\n  Nhạc sỹ nào sáng tác bài hát \"Ti�ếng chày trên sóc Bom Bo\"? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. Phạm Duy       ||       2. Xuân Hồng       |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Phạm Tuyên     ||       4. Cao B�ằng        |\n";
        cout<<"|====================================================|\n";
		int cau88;
cauhoi88:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau88;
            if(cau88<0||cau88>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau88<0||cau88>4);
        
        if(cau88==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 17% \n 2 chiếm 36% \n 3 chiếm 40% \n 4 chi�ếm 7% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi88;
        }
        
        if(cau88==2) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Nhạc sỹ nào sáng tác bài hát \"Ti�ếng chày trên sóc Bom Bo\"? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  2. Xuân Hồng  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==89)
    {
    	cout<<"\n\n  Loài cây nào sau đây đư�ợc x�ếp vào họ đ�ậu? \n";
        cout<<"|====================================================|\n";
        cout<<"|      1. B�ằng lăng      ||      2. Bạch đàn         |\n";
        cout<<"|====================================================|\n";
        cout<<"|      3. Lim            ||        4. Bàng           |\n";
        cout<<"|====================================================|\n";
		int cau89;
cauhoi89:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau89;
            if(cau89<0||cau89>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau89<0||cau89>4);
        
        if(cau89==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 1 vs 2 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 27% \n 2 chiếm 16% \n 3 chiếm 30% \n 4 chi�ếm 27% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi89;
        }
        
        if(cau89==3) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Loài cây nào sau đây đư�ợc x�ếp vào họ đ�ậu? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  3. Lim  \n";
            x=0;
        }
    }		

//-------------------------------------------------------------------------------------------------------------------------

	if(ch==90)
    {
    	cout<<"\n\n  Châu lục nào tiếp giáp với cả Đại Tây Dương và Ấn Độ Dương? \n";
        cout<<"|=============================================|\n";
        cout<<"|     1. Châu Mỹ      ||     2. Châu Âu       |\n";
        cout<<"|=============================================|\n";
        cout<<"|     3. Châu Á       ||     4. Châu Phi      |\n";
        cout<<"|=============================================|\n";
		int cau90;
cauhoi90:
		do
        {
            cout<<"Chon t�ừ 1 đến 4 để trả lời ";
            cout<<"(0 sẽ s�ử dụng quyền trợ giúp):";
            cin >>cau90;
            if(cau90<0||cau90>4)
                cout<<"Nh�ập không hợp lệ xin vui lòng nhập lại \n";
        }
        while(cau90<0||cau90>4);
        
        if(cau90==0)
        {
            trogiup();
            cout<<"Quyền trợ giúp thứ: ";
            do
            {
                cin>>a;
            }
            while(a<0||a>4);
            
            if(b[1]==0&&a==1||b[2]==0&&a==2||b[3]==0&&a==3)
            {
                cout<<"\n\n Quyền trợ giúp này đã được sử dụng \n";
                cout<<"\n\n Câu trả lời của bạn là: ";
            }
            if(a==b[1])
            {
                cout<<"\n\nNgười thân của bạn có cau trả lời là đáp án 4 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[1]=0;
            }
            if(a==b[2])
            {
                cout<<"\n\nLoại bỏ đáp án 2 vs 3 \n";
                cout<<"Câu trả lời của bạn là: ";
                b[2]=0;
            }
            if(a==b[3])
            {
                cout<<"\n\nđáp án 1 chiếm 26% \n 2 chiếm 25% \n 3 chiếm 18% \n 4 chi�ếm 31% \n";
                cout<<"Câu trả lời của bạn là: ";
                b[3]=0;
            }
            goto cauhoi90;
        }
        
        if(cau90==4) x=1;
        else
        {
            system("cls");
            cout<<"\n\n  Châu lục nào tiếp giáp với cả Đại Tây Dương và Ấn Độ Dương? \n";
            cout<<" Đáp án đúng là:\n";
            cout<<"  4.  Châu Phi    \n";
            x=0;
        }
    }
}		

//-------------------------------------------------------------------------------------------------------------------------
//=========================================================================================================================


void tien()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout<<"\n\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 15: 150,000 đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 14: 85,000  đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 13: 60,000  đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 12: 40,000  đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 11: 30,000  đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 10: 22,000  đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 9:  14,000  đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 8:  10,000  đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 7:  6,000   đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 6:  3,000   đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 5:  2,000   đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 4:  1,000   đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 3:  600     đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 2:  400     đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
    cout<<"\t\t\t|  Câu 1:  200     đồng     |\n";
    cout<<"\t\t\t|===========================|\n";
}


int main()
{
	srand(time(NULL));//ngau nhien theo thoi gian
	SetConsoleOutputCP(65001);//chuyen font chu UTF sang tieng viet
	
//---------------THAY DOI KICH THUOC MAN HINH CONSOLE------------------------------------------------------------
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    SetConsoleTitle("Ai la trieu phu");
    SMALL_RECT windowSize = {0, 0, 80, 40};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    COORD bufferSize = {10, 10};
    SetConsoleScreenBufferSize(wHnd, bufferSize);
//---------------------------------------------------------------------------------------------------------------

    system("color b9");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    char chon, ten[50];
    int x=0, ch, dem=0, i=0;
    

    batdau:
    do
    {
        cout<<"\n\n\n|==============================================================================|\n";
        cout<<"|                   CHÀO MỪNG BẠN ĐẾN GAME AI LÀ TRIỆU PHÚ                     |\n";
        cout<<"|==============================================================================|\n\n\n";
        cout<<"|==============================================================================|\n";
        cout<<"|                                1. PLAY                                       |\n";
        cout<<"|==============================================================================|\n";
        cout<<"|==============================================================================|\n";
        cout<<"|                                2. RULES                                      |\n";
        cout<<"|==============================================================================|\n";
        cout<<"|==============================================================================|\n";
        cout<<"|                                3. EXIT                                       |\n";
        cout<<"|==============================================================================|\n";
        
        chon=getch();
        do
        {
        	if(chon<48||chon>51)
        	{
        		system("cls");
        		system("color b9");
    			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        		cout<<"Nh�ấn không h�ợp lệ xin vui lòng Nh�ấn lại!\n";
        		cout<<"1: chơi     2:lu�ật chơi     3: thoát\n";
        		goto batdau;
        	}
        }
        while(chon<48||chon>51);
        
        switch(chon)
        {
        	
//==================================VAO CHOI NEU BAN AN PHIM 1======================================================
        	case 49:
        	{
        		system("cls");
        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        		cout<<"\n\n Nhập tên của bạn: ";
            	cin>>ten;
            	strupr(ten);
            	
            	cout<<"\t\t    SỐ TIỀN "<< ten <<" SẼ NH�ẬN ĐƯ�ỢC QUA MỖI CÂU HỎI   \n\n";
        		tien();
        		Sleep(5000);


//------------------------------BAT DAU VAO CAC CAU HOI--------------------------------------------
                    system("cls");
            		cout<<"\n\n\t\t\tBẮT ĐẦU CHƠI";
            		cout<<"\n\nCâu 1: \n";
            		ch=rand()%10+1;
            		cauhoi(ch,x);
            		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            	if(x==1)
                {
                	system("cls");
                	dem=dem+200;
                	cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 1 là: " << dem <<" Đồng \n";
                    cout<<"\n\nCâu 2: \n";
                    ch=rand()%10+11;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
            	}
                if(x==1)
				{
					system("cls");
					dem=dem+200;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 2 là: " << dem <<" Đồng \n";	
                   	cout<<"\n\nCâu 3: \n";
                   	ch=rand()%10+21;
                   	cauhoi(ch, x);
                   	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+200;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 3 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 4: \n";
                	ch=rand()%10+31;
                	cauhoi(ch, x);
                	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+400;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 4 là: " << dem <<" Đồng \n";	
                	cout<<"\n\nCâu 5: \n";
                    ch=rand()%10+41;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+1000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 5 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 6: \n";
                    ch=rand()%5+51;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+1000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 6 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 7: \n";
                    ch=rand()%5+56;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+3000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 7 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 8: \n";
                    ch=rand()%5+61;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				}
                if(x==1)
				{
					system("cls");
					dem=dem+4000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 8 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 9: \n";
                    ch=rand()%5+66;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+4000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 9 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 10: \n";
                    ch=rand()%3+71;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+8000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 10 là: " << dem <<" Đồng \n";	
                	cout<<"\n\nCâu 11: \n";
                	ch=rand()%3+75;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+8000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 11 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 12: \n";
                    ch=rand()%3+78;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+10000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 12 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 13: \n";
                    ch=rand()%3+81;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+20000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 13 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 14: \n";
                    ch=rand()%3+85;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
				}
				if(x==1)
				{
					system("cls");
					dem=dem+25000;
					cout<<"\nsố tiền hiện tại của " << ten <<" khi bạn đã qua câu 14 là: " << dem <<" Đồng \n";	
                    cout<<"\n\nCâu 15: \n";
                    ch=rand()%3+88;
                    cauhoi(ch, x);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				}
//------------------------------------------------------------------------------------------------------------
					
				if(x==1)
				{
					dem=dem+65000;
					system("cls");
                    cout<<"\t CHÚC MỪNG ";
                    cout<<ten;
                    cout<<" BẠN LÀ NGƯỜI CHIẾN THẮNG \n\n";
                    cout<<"\tSỐ PHẦN THƯỞNG BẠN NHẬN ĐƯỢC LÀ: ";
                    cout<<dem<<" Đồng \n";
                    
                    cout<<"\t|===============================|\n";
                    cout<<"\t|  Nh�ấn 1 Quay lại Chương Trình |\n";
                    cout<<"\t|===============================|\n";
                    cout<<"\t|  Nh�ấn Bất kỳ để thoát         |\n";
                    cout<<"\t|===============================|\n";
                    char k=getch();
                    if(k==49)
                    {
						system("cls");
						b[1]=1;
                        b[2]=2;
                        b[3]=3;
                        goto batdau;
                    }
					else
						exit(0);
				}
					
            	if(x==0)
            	{
            		system("color 4e");
            		cout<<"\n\n\t\t \n\n";
            		char chuoi[50]="                             GAME OVER ";
            		int l=strlen(chuoi);
            		for(int i=0; i<l; i++)
            		{
            			cout<<chuoi[i];
                        Sleep(50);
					}
					cout<<"\n\n\t\tSỐ PHẦN TIỀN THƯỞNG ";
                    cout<<ten;
                    cout<<" NHẬN ĐƯỢC LÀ: ";
                    cout<<dem<<" Đồng \n";
                    dem=0;
                    cout<<"\t\t|===============================|\n";
                	cout<<"\t\t|  Nh�ấn 1 Quay lại Chương Trình |\n";
                    cout<<"\t\t|===============================|\n";
                    cout<<"\t\t|  Nh�ấn Bất kỳ để thoát         |\n";
                    cout<<"\t\t|===============================|\n";
                    char h=getch();
                    if(h==49)
                    {
						system("cls");
						b[1]=1;
                        b[2]=2;
                        b[3]=3;
                        goto batdau;
                    }
					else
					{
						
						exit(0);
					}
        		}
        	}
//============================================================================================================================


//===========================================VAO RULES NEU BAN AN PHIM 2======================================================        	
        	case 50:
        	{
        		system("cls");
        		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
            	cout<<"\t\t|============================================|\n";
            	cout<<"\t\t|\t\t    RULES                    |\n";
            	cout<<"\t\t|============================================|\n\n";
            	cout<<"\n          Có t�ất cả 15 câu hỏi vượt qua 15 câu hỏi của chương trình ";
            	cout<<"\n          bạn sẽ dành được 150 triệu đồng \n";
            	cout<<"\n          Có các quyền trợ giúp: \n";
            	cout<<"\n\n\t   |=====================================================|\n";
            	cout<<"\t   |1. GỌI ĐIỆN CHO NGƯỜI THÂN:Bạn có 30 giây gọi điện   |\n";
            	cout<<"\t   | 1 người thân để trợ giúp                            |\n";
            	cout<<"\t   |=====================================================|\n";
            	cout<<"\n\t   |=====================================================|\n";
            	cout<<"\t   |2. 50/50: máy tính sẽ bỏ đi 2 đáp án sai             |\n";
            	cout<<"\t   |=====================================================|\n";
            	cout<<"\n\t   |=====================================================|\n";
            	cout<<"\t   |3. HỎI Ý KIẾN KHÁNG GIẢ: Khán giả trong trường quay  |\n";
            	cout<<"\t   |  sẽ đưa ra đáp án mà cho họ là chính xác.           |\n";
            	cout<<"\t   |=====================================================|\n\n\n";
            	Sleep(2000);
            	cout<<"\t\t     |===============================|\n";
            	cout<<"\t\t     |  Nh�ấn 1 Quay lại Chương Trình |\n";
            	cout<<"\t\t     |===============================|\n";
            	cout<<"\t\t     |===============================|\n";
            	cout<<"\t\t     |  Nh�ấn Bất kỳ để thoát         |\n";
            	cout<<"\t\t     |===============================|\n";
	
				char c=getch();
            	if(c==49)
                {
					system("cls");
					b[1]=1;
                    b[2]=2;
                    b[3]=3;
                    goto batdau;
                }
            	else
            		exit(0);
			}
//=========================================================================================================================

			
			case 51:
				exit(0);
		}
    }
    while(chon<48||chon>51);
    system("pause");
}
