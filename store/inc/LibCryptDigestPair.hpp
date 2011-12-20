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
						
#ifndef LCDIGESTPAIR_H
#define LCDIGESTPAIR_H
#include <openssl/evp.h>
#include <misc/DigestPair.hpp>
namespace ocfa {
  /** DigestPair implementation class that uses Openssl its
   * libcrypto. We may want to move this class to the store
   * namespace and library */
  class LibCryptDigestPair:public misc::DigestPair {
   public:
     LibCryptDigestPair();
     void update(const char *buf,size_t size);
     void final();
   private:
     EVP_MD_CTX mCtxMD5;
     EVP_MD_CTX mCtxSHA1;
  };
}
#endif
