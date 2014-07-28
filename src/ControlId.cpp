#include "ControlId.h"

using namespace tataille;

ControlId::ControlId() :
   m_controlId(-1),
   m_windowId(-1),
   m_parentId(-1)
{
}

ControlId::ControlId(int controlId, int windowId, int parentId) :
   m_controlId(controlId),
   m_windowId(windowId),
   m_parentId(parentId)
{
}

ControlId::ControlId(const ControlId& copy) :
   m_controlId(copy.m_controlId),
   m_windowId(copy.m_windowId),
   m_parentId(copy.m_parentId)
{
}

ControlId::ControlId(ControlId&& move) :
   m_controlId(move.m_controlId),
   m_windowId(move.m_windowId),
   m_parentId(move.m_parentId)
{
}

ControlId& ControlId::operator=(const ControlId& copy)
{
   if (this == &copy) {
      return *this;
   }
   
   m_controlId = copy.m_controlId;
   m_windowId = copy.m_windowId;
   m_parentId = copy.m_parentId;
   
   return *this;
}

ControlId& ControlId::operator=(ControlId&& move)
{
   if (this == &move) {
      return *this;
   }
   
   m_controlId = move.m_controlId;
   m_windowId = move.m_windowId;
   m_parentId = move.m_parentId;
   
   return *this;
}

int ControlId::controlId() const
{
   return m_controlId;
}

int ControlId::windowId() const
{
   return m_windowId;
}

int ControlId::parentId() const
{
   return m_parentId;
}

void ControlId::setControlId(int controlId)
{
   m_controlId = controlId;
}

void ControlId::setWindowId(int windowId)
{
   m_windowId = windowId;
}

void ControlId::setParentId(int parentId)
{
   m_parentId = parentId;
}
      
