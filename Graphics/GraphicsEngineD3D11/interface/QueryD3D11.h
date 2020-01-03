/*
 *  Copyright 2019-2020 Diligent Graphics LLC
 *  Copyright 2015-2019 Egor Yusov
 *  
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  
 *      http://www.apache.org/licenses/LICENSE-2.0
 *  
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *  In no event and under no legal theory, whether in tort (including negligence), 
 *  contract, or otherwise, unless required by applicable law (such as deliberate 
 *  and grossly negligent acts) or agreed to in writing, shall any Contributor be
 *  liable for any damages, including any direct, indirect, special, incidental, 
 *  or consequential damages of any character arising as a result of this License or 
 *  out of the use or inability to use the software (including but not limited to damages 
 *  for loss of goodwill, work stoppage, computer failure or malfunction, or any and 
 *  all other commercial damages or losses), even if such Contributor has been advised 
 *  of the possibility of such damages.
 */

#pragma once

/// \file
/// Definition of the Diligent::IQueryD3D11 interface

#include "../../GraphicsEngine/interface/Query.h"

namespace Diligent
{

// {77D95EAA-D16E-43F4-B0EB-BEBCD2EC8C57}
static constexpr INTERFACE_ID IID_QueryD3D11 =
    {0x77d95eaa, 0xd16e, 0x43f4, {0xb0, 0xeb, 0xbe, 0xbc, 0xd2, 0xec, 0x8c, 0x57}};

/// Exposes Direct3D11-specific functionality of a Query object.
class IQueryD3D11 : public IQuery
{
    /// Returns a pointer to the internal ID3D11Query object.
    virtual ID3D11Query* GetD3D11Query() = 0;
};

} // namespace Diligent
