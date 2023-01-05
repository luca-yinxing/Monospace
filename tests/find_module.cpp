// Copyright (C) 2021-2023 Luca Gasperini <luca.gasperini@xsoftware.it>
//
// This file is part of Monospace.
//
// Monospace is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Monospace is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Monospace.  If not, see <http://www.gnu.org/licenses/>.

#include <process.hpp>

using namespace mtk;
using namespace mtk::msp;

int main(int argc, char **argv)
{
        int pid;
        moduleinfo m_info;

        pid = get_pid("Hearthstone.exe");

        if (pid == -1)
                return 1;
        if (find_module(pid, &m_info, "mono-2.0-bdwgc.dll") != EXE_OK)
                return 1;

        return 0;
}