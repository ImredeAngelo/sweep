#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{
	if (!glfwInit())
		return -1;

	GLFWwindow* window = glfwCreateWindow(1080, 720, "Sweep", nullptr, nullptr);

	if (!window)
	{
		std::cout << "Hello World\n";
		return -2;
	}

	glfwMakeContextCurrent(window);
	int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
	
	while (!glfwWindowShouldClose(window)) {
		
	}

	glfwTerminate();
	return 0;
}