all:	  isqlodbc$(EXESUFFICS) 
clean:
	@$(REMOVECOMMAND) *$(OBJSUFFICS) $(COMPFILES)

isqlodbc$(EXESUFFICS): isqlodbc$(OBJSUFFICS) 
	$(LN) $(LNOUT)isqlodbc$(EXESUFFICS) $(LDFLAGS) $(VERFILE) isqlodbc$(OBJSUFFICS) $(COMPATLIBS) $(LIBS)