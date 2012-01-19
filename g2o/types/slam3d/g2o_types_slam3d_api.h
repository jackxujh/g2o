// g2o - General Graph Optimization
// Copyright (C) 2012 Mark Pupilli
// 
// g2o is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published
// by the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// g2o is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

/***************************************************************************
 *  Description: import/export macros for creating DLLS with Microsoft
 *	compiler. Any exported function needs to be declared with the
 *  appropriate G2O_XXXX_API macro. Also, there must be separate macros
 *  for each DLL (arrrrrgh!!!)
 *
 *  17 Jan 2012
 *  Email: pupilli@cs.bris.ac.uk
 ****************************************************************************/
#ifndef G2O_TYPES_SLAM3D_API_H
#define G2O_TYPES_SLAM3D_API_H

#ifdef _MSC_VER
// We are using a Microsoft compiler:
#ifdef types_slam3d_EXPORTS
#define G2O_TYPES_SLAM3D_API __declspec(dllexport)
#else
#define G2O_TYPES_SLAM3D_API __declspec(dllimport)
#endif

#else
// Not Microsoft compiler so set empty definition:
#define G2O_TYPES_SLAM3D_API
#endif

#endif // G2O_TYPES_SLAM3D_API_H
