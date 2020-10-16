/*
  The MIT License (MIT)

  Copyright (c) 2020 Florian Mikulik

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/

#ifndef ISO14443_L4_DEF_H_
#define ISO14443_L4_DEF_H_

/*! \addtogroup ISO parameters
    
  @{
*/
/* Frame Size for proximity coupling Device Integer
 * FSDI   FSD(bytes)
 * 0      16
 * 1      24
 * 2      32
 * 3      40
 * 4      48
 * 5      64
 * 6      96
 * 7      128
 * 8      256
 * 9-F    RFU
*/
#define FSDI 5
//! @}


#endif  // ISO14443_L4_DEF_H_
