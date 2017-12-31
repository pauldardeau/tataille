// Copyright Paul Dardeau, SwampBits LLC 2014
// BSD License

#ifndef TATAILLE_CONTROLID_H
#define TATAILLE_CONTROLID_H

namespace tataille
{
   /**
    * ControlId is a data structure to specifically identify a control that belongs to
    * a window, and may optionally have another control as its parent.
    */
   class ControlId
   {
   public:
      int windowId;
      int controlId;
      int parentId;

      /**
       * Default constructor
       */
      ControlId() :
         windowId(-1),
         controlId(-1),
         parentId(-1)
      {
      }
      
      /**
       * Constructor to initialize data values
       * @param controlId the control identifier
       * @param windowId the window identifier
       * @param parentId the parent identifier
       */
      ControlId(int aWindowId, int aControlId, int aParentId=-1) :
         windowId(aWindowId),
         controlId(aControlId),
         parentId(aParentId)
      {
      }
      
      /**
       * Copy constructor
       * @param copy the source of the copy
       */
      ControlId(const ControlId& copy) :
         windowId(copy.windowId),
         controlId(copy.controlId),
         parentId(copy.parentId)
      {
      }
      
      /**
       * Copy operator
       * @param copy the source of the copy
       * @return reference to the target of the copy
       */
      ControlId& operator=(const ControlId& copy)
      {
         if (this == &copy) {
            return *this;
         }
         
         windowId = copy.windowId;
         controlId = copy.controlId;
         parentId = copy.parentId;
         
         return *this;
      }
      
      bool isValid() const {
         return ((windowId > -1) && (controlId > -1));
      }

      bool operator==(const ControlId& compare) const
      {
         return windowId == compare.windowId &&
                controlId == compare.controlId &&
                parentId == compare.parentId;
      }

      bool operator<(const ControlId& compare) const
      {
         if (windowId < compare.windowId) {
            return true;
         } else if (windowId > compare.windowId) {
            return false;
         } else {
            // matching window id
            return controlId < compare.controlId;
         }
      }
   };
}

#endif
