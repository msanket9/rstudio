/*
 * SessionPanmirror.hpp
 *
 * Copyright (C) 2009-16 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */
#ifndef SESSION_MODULES_PANMIRROR_HPP
#define SESSION_MODULES_PANMIRROR_HPP

#include <string>

namespace rstudio {
namespace core {
   class Error;
   class FilePath;
   namespace json {
     class JsonRpcResponse;
   }
   namespace system {
      struct ProcessResult;
   }
}
}

namespace rstudio {
namespace session {
namespace modules {
namespace panmirror {

std::string errorMessage(const core::Error& error);

void setErrorResponse(const core::Error& error, core::json::JsonRpcResponse* pResponse);

void setProcessErrorResponse(const core::system::ProcessResult& result,
                             core::json::JsonRpcResponse* pResponse);

core::Error initialize();

} // namespace panmirror
} // namespace modules
} // namespace session
} // namespace rstudio

#endif /* SESSION_MODULES_PANMIRROR_HPP */
