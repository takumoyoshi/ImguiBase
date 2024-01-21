#include "ui_backend.hpp"

#include <string>
#include <cstring>
#include <imgui_internal.h>

namespace GuiSettings
{
	extern float WindowWidth;
	extern float WindowHeight;
	extern char AppName[255];
	
	extern std::string CurrentTheme;
	extern std::string CurrentPage;

	extern ImVec4 AccentColor;
}

namespace Pages {
	void Default();
}

namespace Themes {
	void Default();
}

void ui();
