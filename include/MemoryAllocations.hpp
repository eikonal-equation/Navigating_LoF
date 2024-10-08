/*
* ==============================================================================
*  Copyright (C) 2024 Marissa Gee Nicolas Gonzalez Granda Sunay Joshi 
*                     Nagaprasad Rudrapatna Anne Somalwar 
*  Copyright (C) 2019  Marc Aurèle Gilles
*  Copyright (C) 2019  Elliot Cartee, Qianli Song, Lexiao Lai
*
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
* ------------------------------------------------------------------------------
* File: MemoryAllocations.hpp
*
* Authors: Marissa Gee Nicolas Gonzalez Granda Sunay Joshi 
*          Nagaprasad Rudrapatna Anne Somalwar 
*          (based on code by Elliot Cartee, Qianli Song, Lexiao Lai)
*             (based on code by Marc Aurèle Gilles and Zachary Clawson)
*
* Description: This file contains helper functions for allocating and resizing
* multi-dimensional Boost arrays.
*
* ==============================================================================
*/

#ifndef MEMORY_ALLOCATIONS_HPP
#define MEMORY_ALLOCATIONS_HPP

#include "boost/multi_array.hpp"

namespace memory {
  /* Shorter names for Boost multi-array classes */
  template<class T>
  using array2D_t = boost::multi_array<T,2>;

  template<class T>
  using array3D_t = boost::multi_array<T,3>;

  template<class T>
  using array4D_t = boost::multi_array<T,4>;

  /**
  * This function allocates a 2D Boost array of size (n1,n2)
  */
  template <class T>
  array2D_t<T> allocateArray2D(const int n1, const int n2) {
    array2D_t<T> array(boost::extents[n1][n2]);
    return array;
  }

  /**
  * This function allocates a 3D Boost array of size (n1,n2,n3)
  */
  template <class T>
  array3D_t<T> allocateArray3D(const int n1, const int n2, const int n3) {
    array3D_t<T> array(boost::extents[n1][n2][n3]);
    return array;
  }

  /**
  * This function allocates a 4D Boost array of size (n1,n2,n3, n4)
  */
  template <class T>
  array4D_t<T> allocateArray4D(const int n1, const int n2, const int n3,
    const int n4) {
    array4D_t<T> array(boost::extents[n1][n2][n3][n4]);
    return array;
  }

  /**
  * This function resizes a 2D Boost array into size (n1,n2)
  */
  template <class T>
  void resizeArray2D(array2D_t<T> &array, const int n1, const int n2) {
    array.resize(boost::extents[n1][n2]);
    return;
  }

} /* namespace memory */

#endif
