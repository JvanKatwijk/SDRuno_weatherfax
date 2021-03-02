#
/*
 *    Copyright (C) 2020
 *    Jan van Katwijk (J.vanKatwijk@gmail.com)
 *    Lazy Chair Computing
 *
 *    This file is part of the SDRuno weatherfax plugin
 *
 *    weatherfax plugin is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    weatherfax plugin is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with weatherfax; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __BANDPASS_FILTER_H
#define __BANDPASS_FILTER_H

#include	<complex>
#include	<vector>

class	faxBandfilter {
public:
			faxBandfilter	(int16_t, int32_t, int32_t, int32_t);
			~faxBandfilter	();
	std::complex<float> Pass (std::complex<float>);
	void		update	(int, int);
private:
	std::vector<float> filterBase;
	std::vector<std::complex<float>> filterKernel;
	std::vector<std::complex<float>> Buffer;
	int	sampleRate;
	int	ip;
	int	filterSize;
};

#endif

