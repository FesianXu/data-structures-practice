#include "cpp_buf/cpp_buf.hpp"
#include <iostream>

int main(void)
{
	queue_buf buf(10) ;
	buf.printBuf();
	buf.pushMultipleDataIntoBufferFORCE("���Ե�Ԫ��123456789987654321") ;
	buf.printBuf() ;
	buf.cleanBuf() ;
	buf.printBuf() ;
	system("pause") ;
}