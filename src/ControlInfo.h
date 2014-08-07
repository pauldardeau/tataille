#ifndef TATAILLE_CONTROLINFO_H
#define TATAILLE_CONTROLINFO_H

#include <string>

#include "ControlId.h"
#include "Rect.h"

namespace tataille
{
   class ControlInfo
   {
   public:
      ControlId cid;
      std::string controlName;
      std::string text;
      std::string helpCaption;
      std::string values;
      Rect rect;
      bool isVisible;
      bool isEnabled;
      
      ControlInfo() :
         isVisible(true),
         isEnabled(true)
      {
      }
      
      ControlInfo(const ControlInfo& copy) :
         cid(copy.cid),
         controlName(copy.controlName),
         text(copy.text),
         helpCaption(copy.helpCaption),
         values(copy.values),
         rect(copy.rect),
         isVisible(copy.isVisible),
         isEnabled(copy.isEnabled)
      {
      }
      
      ControlInfo(ControlInfo&& move) :
         cid(move.cid),
         controlName(std::move(move.controlName)),
         text(std::move(move.text)),
         helpCaption(std::move(move.helpCaption)),
         values(std::move(move.values)),
         rect(move.rect),
         isVisible(move.isVisible),
         isEnabled(move.isEnabled)
      {
      }
      
      ControlInfo& operator=(const ControlInfo& copy)
      {
         if (this == &copy) {
            return *this;
         }
         
         cid = copy.cid;
         controlName = copy.controlName;
         text = copy.text;
         helpCaption = copy.helpCaption;
         values = copy.values;
         rect = copy.rect;
         isVisible = copy.isVisible;
         isEnabled = copy.isEnabled;
         
         return *this;
      }
      
      ControlInfo& operator=(ControlInfo&& move)
      {
         if (this == &move) {
            return *this;
         }

         cid = move.cid;
         controlName = std::move(move.controlName);
         text = std::move(move.text);
         helpCaption = std::move(move.helpCaption);
         values = std::move(move.values);
         rect = move.rect;
         isVisible = move.isVisible;
         isEnabled = move.isEnabled;
         
         return *this;
      }

   };
}

#endif
