//The Open Computer Forensics Library
//Copyright (C) KLPD 2003..2006  <ocfa@dnpa.nl>
//
//This library is free software; you can redistribute it and/or
//modify it under the terms of the GNU Lesser General Public
//License as published by the Free Software Foundation; either
//version 2.1 of the License, or (at your option) any later version.
//
//This library is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//Lesser General Public License for more details.
//
//You should have received a copy of the GNU Lesser General Public
//License along with this library; if not, write to the Free Software
//Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
#ifdef CYGWIN
#include <libgen.h>
#endif						
#include "FileDumpOfSwapPartition.hpp"
using namespace ocfa::misc;
namespace ocfa {
  namespace fs {
    FileDumpOfSwapPartition::FileDumpOfSwapPartition(std::string path): BasicFileDump(path) {
      updateTypeName("FileDumpOfSwapPartition");
      updateName(basename(const_cast<char *>(path.c_str())));
    }
  }
}
