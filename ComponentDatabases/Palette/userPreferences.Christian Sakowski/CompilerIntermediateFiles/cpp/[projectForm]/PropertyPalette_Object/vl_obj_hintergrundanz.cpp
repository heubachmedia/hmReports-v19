extern Txt kdEIiV5O$KzQ;
Asm4d_Proc proc_PAL__CHANGE__OBJECT;
extern unsigned char D_obj_p_PropertyPalette__Object_00vl__obj__hintergrundanz[];
void obj_p_PropertyPalette__Object_00vl__obj__hintergrundanz( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Object_00vl__obj__hintergrundanz);
	if (!ctx->doingAbort) try {
		{
			Txt t0;
			t0=kdEIiV5O$KzQ.get();
			Long t1;
			t1=6;
			c.f.fLine=1;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}