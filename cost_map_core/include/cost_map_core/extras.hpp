/**
 * @file /cost_map_core/include/cost_map_core/extras.hpp
 */
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef cost_map_core_EXTRAS_HPP_
#define cost_map_core_EXTRAS_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

#include <memory>

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace cost_map {

/*****************************************************************************
** Interfaces
*****************************************************************************/

typedef std::shared_ptr<cost_map::CostMap> CostMapPtr;
typedef std::shared_ptr<cost_map::CostMap const> CostMapConstPtr;

/*****************************************************************************
** Trailers
*****************************************************************************/

} // namespace cost_map

#endif /* cost_map_core_EXTRAS_HPP_ */