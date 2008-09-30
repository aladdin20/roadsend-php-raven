/* ***** BEGIN LICENSE BLOCK *****
;; Roadsend PHP Compiler
;;
;; This program is free software; you can redistribute it and/or
;; modify it under the terms of the GNU General Public License
;; as published by the Free Software Foundation; either version 2
;; of the License, or (at your option) any later version.
;;
;; This program is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.
;;
;; You should have received a copy of the GNU General Public License
;; along with this program; if not, write to the Free Software
;; Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
   ***** END LICENSE BLOCK *****
*/

#ifndef RPHP_PSTANDALONETARGETS_H_
#define RPHP_PSTANDALONETARGETS_H_

#include "pIRTypes.h"
#include "pLinkTarget.h"

namespace rphp {

// create a stand alone binary from the given source files
// a main "entry" php script must be given, which will be the entry point of the binary
class pStandAloneTarget : public pLinkTarget {

protected:
    std::string mainFile;
    pIRTypes IRTypes;

    llvm::Module* createStubModule(void);

public:
    pStandAloneTarget(const std::string& outName, const std::string& mainName): mainFile(mainName), pLinkTarget(outName) { }

    virtual void execute(void);

    const std::string& getMainFileName(void) { return mainFile; }


};

// custom GUI stuff, like winres
class pGUITarget : public pStandAloneTarget {


};

} // namespace

#endif /* RPHP_PSTANDALONETARGETS_H_ */