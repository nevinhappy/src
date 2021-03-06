
//<code(py_segment)>
void segment_t_start_ea_set(segment_t *segm, ea_t newea)
{
  if ( getseg(segm->start_ea) == segm )
  {
    PyErr_SetString(PyExc_AttributeError, "Can't modify start_ea, please use set_segm_start() instead");
  }
  else
  {
    segm->start_ea = newea;
  }
}

ea_t segment_t_start_ea_get(segment_t *segm)
{
  return segm->start_ea;
}

void segment_t_end_ea_set(segment_t *segm, ea_t newea)
{
  if ( getseg(segm->start_ea) == segm )
  {
    PyErr_SetString(PyExc_AttributeError, "Can't modify end_ea, please use set_segm_end() instead");
  }
  else
  {
    segm->end_ea = newea;
  }
}

ea_t segment_t_end_ea_get(segment_t *segm)
{
  return segm->end_ea;
}
//</code(py_segment)>

//<inline(py_segment)>
sel_t get_defsr(segment_t *s, int reg)
{
    return s->defsr[reg];
}
void set_defsr(segment_t *s, int reg, sel_t value)
{
    s->defsr[reg] = value;
}
//</inline(py_segment)>
