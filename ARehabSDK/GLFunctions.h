/*
This file is part of ARehab.

ARehab is free software : you can redistribute it and / or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, version 3 of the License.

ARehab is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar.If not, see <http://www.gnu.org/licenses/>.

Copyright 2015 Jacobo de Haro
jacobodeharo@gmail.com
@jacobodeharo

*/

#ifndef GLFUNCTIONS_H_
#define GLFUNCTIONS_H_

#include <QDebug>
#include <QOpenGLFunctions_4_3_Core>
#include <QOpenGLContext>

namespace ARehabGL
{
	class GLFunctions
	{
		public:	
			GLFunctions(void) :gl(0){}
			GLFunctions(QOpenGLFunctions_4_3_Core * gl) : gl(gl){}
			QOpenGLFunctions_4_3_Core * setupOpenGLFunctionsPtr(QOpenGLContext * context);
					
		protected:
			QOpenGLFunctions_4_3_Core * gl;
	};
};

#endif