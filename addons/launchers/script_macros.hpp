#define MACRO_NULL_SCOPE \
        ACE_ScopeAdjust_Vertical[] = {0, 0}; \
        ACE_ScopeAdjust_Horizontal[] = {0, 0}; \
        ACE_ScopeAdjust_VerticalIncrement = 0; \
        ACE_ScopeAdjust_HorizontalIncrement = 0
