/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 2012 Sergey Lisitsyn
 * Copyright (C) 2012 Jiayu Zhou and Jieping Ye
 */

#ifndef  MALSAR_LOW_RANK_H_
#define  MALSAR_LOW_RANK_H_
#include <shogun/lib/config.h>
#ifdef HAVE_EIGEN3
#include <shogun/lib/malsar/malsar_options.h>
#include <shogun/features/DotFeatures.h>

namespace shogun 
{

malsar_result_t malsar_low_rank(
		CDotFeatures* features,
		double* y,
		double rho,
		const malsar_options& options);

};
#endif
#endif   /* ----- #ifndef MALSAR_LOW_RANK_H_  ----- */
