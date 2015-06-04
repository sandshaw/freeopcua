/// @author Alexander Rykovanov 2013
/// @email rykovanov.as@gmail.com
/// @brief OPC UA Address space part.
/// @license GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#pragma once

#include <opc/common/addons_core/addon_parameters.h>
#include <opc/ua/protocol/endpoints.h>
#include <opc/ua/server/endpoints_services.h>


namespace OpcUa
{

  std::vector<Server::ApplicationData> ParseEndpointsParameters(const std::vector<Common::ParametersGroup>& rootGroup, bool debug);
  std::vector<Common::ParametersGroup> CreateCommonParameters(const std::vector<Server::ApplicationData>& endpoints, bool debug);

}
