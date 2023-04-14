#pragma once

class Test {
public:
	// static int a;
	inline static int a = 10;
	// 이전 Old Style 에서는 5라인, 11라인 두 줄을 써야 가능했던 코드가
	// 17버전 Modern Style 에서는 한 줄로 사용 가능하다.
};

// int Test::a = 10;
