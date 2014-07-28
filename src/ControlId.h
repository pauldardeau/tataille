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
      /**
       * Default constructor
       */
      ControlId();
      
      /**
       * Constructor to initialize data values
       * @param controlId the control identifier
       * @param windowId the window identifier
       * @param parentId the parent identifier
       */
      ControlId(int controlId, int windowId, int parentId=0);
      
      /**
       * Copy constructor
       * @param copy the source of the copy
       */
      ControlId(const ControlId& copy);
      
      /**
       * Move constructor
       * @param move the source of the move
       */
      ControlId(ControlId&& move);
      
      /**
       * Copy operator
       * @param copy the source of the copy
       * @return reference to the target of the copy
       */
      ControlId& operator=(const ControlId& copy);
      
      /**
       * Move operator
       * @param move the source of the move
       * @param reference to the target of the move
       */
      ControlId& operator=(ControlId&& move);
      
      /**
       * Retrieve the control identifier
       * @return the control identifier, -1 if not assigned
       */
      int controlId() const;
      
      /**
       * Retrieve the window identifier
       * @return the window identifier, -1 if not assigned
       */
      int windowId() const;
      
      /**
       * Retrieve the parent identifier
       * @return the parent identifier, -1 if not assigned
       */
      int parentId() const;
      
      /**
       * Sets new control identifier value
       * @param controlId the new control identifier value
       */
      void setControlId(int controlId);
      
      /**
       * Sets new window identifier value
       * @param windowId the new window identifier value
       */
      void setWindowId(int windowId);
      
      /**
       * Sets new parent identifier value
       * @param parentId the new parent identifier value
       */
      void setParentId(int parentId);
      
   private:
      int m_controlId;
      int m_windowId;
      int m_parentId;
   };
}

#endif
