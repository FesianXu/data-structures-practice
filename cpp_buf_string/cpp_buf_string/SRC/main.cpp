#include "cpp_buf/cpp_buf.hpp"
#include <iostream>

/************************************************************************/
/* 测试循环缓冲队列程序
/************************************************************************/
using namespace std;
int main(void)
{
	queue_buf buf(5) ; // initiate the queue buffer with the storage of 5*5 bytes
	buf.pushSingleDataIntoBuffer('a') ; // push single character into the buffer
	buf.printBuf() ; // print the buffer content
	buf.popSingleDataFromBuffer() ; // pop the buffer
	buf.printBuf() ;
	buf.pushMultipleDataIntoBufferFORCE("012345678901234567890123456789") ; 
	// insert 30 char into the buffer forcely, it will extend automatically.use to insert a string forcely
	buf.printBuf() ;
	buf.pushSingleDataIntoBufferFORCE('e') ; // use to insert a character forcely
	buf.printBuf() ;

	char tmp = buf.popSingleDataFromBuffer() ;
	cout<<tmp<<endl ; // pop test
	buf.printBuf() ;
	buf.cleanBuf() ; // clean the buffer
	buf.printBuf() ;
	system("pause") ;
}