#pragma once
#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include "glm/gtc/matrix_transform.hpp"

#include "Model.h"

void Draw(GLuint** buffers, int index, Model model);

void CreateRockModel(glm::mat4* modelMatrices, GLuint amount);