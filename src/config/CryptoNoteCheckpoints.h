// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
{       0, "2fca13c740c430b3b083726e89352bfe735a7eb7d103f40b5eb6bf9412d4f942"},
{    5000, "8e65c9bf222d50cfc79337b350a815fa06a7c414af74a3b397d8eb7ba754f2da"},
{   10000, "e3070791d19752fd3d5f9b697a11f90a99f15cf47188a6b2cd6517a44f148765"},
{   15000, "9ab84491a77e001fcb8f3f1fa1abdf561ea7ad41de8b969e4dff6cc4da6ebc11"},
{   20000, "9afddc154b4adbb876af0e4045e3c71c16fe2d23f81825f0fd5506777fedcb07"},
{   25000, "0e13e27b058a523dd24a51cf6cded0fe2616269d3dfcd4cff5c36f0e6c6d78df"},
{   30000, "95cf5fb1049ac86f1dc7f1b46e5d2b16a42edd05fa04000d08b5caff7740fb3d"},
{   35000, "13e8460e3d7d6823234c73aeb8449b396011fb840b4d3765d7198790f779c8c5"},
{   40000, "4cf8795d5d6b6902a3662db2f89e884f80e6574db0694d4f363a01e836091328"},
{   45000, "7ddd6f5f326426dbe561453b5cb9844a28f8aa7909838b7e429ee991ed367c5d"},
{   50000, "c826bc0fa176d30e120fae5dde63dd9a9c737243fe9a71872fe1cb97f57d57c3"},
{   55000, "62a9bf7d96627dca2d276fb8e229c4c9cc2060c3afeed08cf070ce3a4e972ea0"},
{   60000, "947719aac65b5a620dcbf872aced74f9c8189c6a6fda594f9bd569e1209f56f4"},
{   65000, "8f14c731c8e55b4f5fb4d1b02d3523ffe9419e5b1e26c14bf39c7bed2ec20463"},
{   70000, "fb20e4a3602251aa3c12923a507cbe95742092213f08a192266cbee0a4d0f802"},
{   75000, "3a8eeae528d623d84c3fb196216fb5b360c6bd217889e3a15f1930882164a25d"},
{   80000, "568ec529035d0d12d631b26c977588a3cb373ce86163b6fd6ce5a679f0588a44"},
{   85000, "2d010ba3c1b8193ec81dabfce762b6611f3145229e96393126e1881a7bcf7bc9"},
{   90000, "8c0c63f62e3bc6f63245c8f03bfca235c34c10ce775df5b6016e92615fb6a23c"},
{   95000, "b33c0f18e5c8baf871788a2b5be356bd6c591da5cde0f91c88d794ffb053870b"},
{  100000, "128c2e373c5674ae21c2b9f9174f1e49b4826bbab2e15641e4f10e99c50336ca"},
{  105000, "00fdad5623073b29ef75ee8274bb3a16078ce4f0b5d7770cc77311bc7e58a78f"},
{  110000, "629a7433ea610c06f30240af60d95b2fba2f889d0517281750b1151ee595d3cf"},
{  115000, "ab424e34798fb631e9c9fb2194893f059bdd5b90ad7ad857a83c2db480c4c14c"},
{  120000, "afc69456ed33416caec34f890ab1dbfeef224a9844fc05cd13529b0531c2737c"},
{  125000, "0596f78a24aa1bcf55afe6d57bdfd449d43328bc6af3b355b08ca95be2074280"},
{  130000, "5293ca1297882d8b3b714dee34e8db2085e531a6aa4290bf206a3dab0dcedb90"},
{  135000, "f9d5c403b8dd77cfb858a06f35359b3e5bfec02df3213b444c92b618d4596272"},
{  140000, "c076c21a00a7bc1db3140ce5cc08e2f18e27f48ad0cf7e2f2bb7bdd14345ee45"},
{  145000, "fdcd031aede0beb33609e69049e3f6852c1bc276c329bc4e4dc91510690881ca"},
{  150000, "2c0c6c4899284ca999861e7c0dec96f55a1bfcb67e033000c625c3225b3e8e0c"},
{  155000, "bfa0d2092edc208c6329716525aa900dc0affc1c1461894e917a0bdfebc819d4"},
{  160000, "afbc1913d1f148cc915c26ba06e4394b082553856a0eb9b200a52bb0fba618cf"},
{  165000, "ad0eefd8f853204aa5563f8db31330b7a28e876e71d502808fe5861e9a598bab"},
{  170000, "c47fdcdb352795265f73d378aced2283f89178c063c4c21de3dddfc2dc1e3851"},
{  175000, "865145e26559597eb791061e5ab0d5cff0256c42de8394e255fdc15c9c9b5168"},
{  180000, "aa3bf469a72e0ab21c3a86562afb50581313f1d40110a2af52a302d70055f174"},
{  185000, "9be0a01c67801cc30e2a06f18e31699d6038290c3b30374f50b0794489320d0f"},
{  190000, "4afbe6138a7baed345f1a91c159d66ff1d9347e0c59f3fa56d8e3fb453370460"},
{  195000, "15a18c98091df74f208ec1907b50a3b22c031720ca2dc412575ecac3942e34c2"},
{  200000, "421f9b9a027fa77890db7a4ff5eec03301f5c320631a525566f3b3e8840dbbe0"},
{  205000, "4183bff756bb071e81281e740ffa91236d79bb598fdaac7639294b386fb215b4"},
{  210000, "0d5f5727a7f3ec7a588b532f5a286ad6a351483fbf4ea1651103697313d08e63"},
{  215000, "4d9f45e7a229109427a8ebf98facea5a6c3ed9965ce8678cc2a027ec9f4ca8ba"},
{  220000, "4b5c68de1e18037938338a1084a099da1f13427b4d58b0d161e21a6f93a82375"}
};
}
