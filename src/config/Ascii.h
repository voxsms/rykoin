// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = 
"\n                                                 \n"
" _______   ___   _______    _____ _____ _____ _   _ \n"
"| ___ \ \ / / | / /  _  |  /  __ \  _  |_   _| \ | |\n"
"| |_/ /\ V /| |/ /| | | |  | /  \/ | | | | | |  \| |\n"
"|    /  \ / |    \| | | |  | |   | | | | | | | . ` |\n"
"| |\ \  | | | |\  \ \_/ /  | \__/\ \_/ /_| |_| |\  |\n"
"\_| \_| \_/ \_| \_/\___/    \____/\___/ \___/\_| \_/\n";



const std::string nonWindowsAsciiArt =

"\n                                                                  \n"
"██████╗ ██╗   ██╗██╗  ██╗ ██████╗      ██████╗ ██████╗ ██╗███╗   ██╗\n"
"██╔══██╗╚██╗ ██╔╝██║ ██╔╝██╔═══██╗    ██╔════╝██╔═══██╗██║████╗  ██║\n" 
"██████╔╝ ╚████╔╝ █████╔╝ ██║   ██║    ██║     ██║   ██║██║██╔██╗ ██║\n"
"██╔══██╗  ╚██╔╝  ██╔═██╗ ██║   ██║    ██║     ██║   ██║██║██║╚██╗██║\n"
"██║  ██║   ██║   ██║  ██╗╚██████╔╝    ╚██████╗╚██████╔╝██║██║ ╚████║\n"
"╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝      ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";



/* Windows has some characters it won't display in a terminal. If your ascii
art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
