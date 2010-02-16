#include <rpc/rpc.h>
#include "NFSv3Protocol.h"


bool_t
xdr_uint64(xdrs, objp)
	XDR *xdrs;
	uint64 *objp;
{
	if (!xdr_u_hyper(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_int64(xdrs, objp)
	XDR *xdrs;
	int64 *objp;
{
	if (!xdr_hyper(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_uint32(xdrs, objp)
	XDR *xdrs;
	uint32 *objp;
{
	if (!xdr_u_long(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_int32(xdrs, objp)
	XDR *xdrs;
	int32 *objp;
{
	if (!xdr_long(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_filename3(xdrs, objp)
	XDR *xdrs;
	filename3 *objp;
{
	if (!xdr_string(xdrs, objp, ~0)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_nfspath3(xdrs, objp)
	XDR *xdrs;
	nfspath3 *objp;
{
	if (!xdr_string(xdrs, objp, ~0)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_fileid3(xdrs, objp)
	XDR *xdrs;
	fileid3 *objp;
{
	if (!xdr_uint64(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_cookie3(xdrs, objp)
	XDR *xdrs;
	cookie3 *objp;
{
	if (!xdr_uint64(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_cookieverf3(xdrs, objp)
	XDR *xdrs;
	cookieverf3 objp;
{
	if (!xdr_opaque(xdrs, objp, 8)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_createverf3(xdrs, objp)
	XDR *xdrs;
	createverf3 objp;
{
	if (!xdr_opaque(xdrs, objp, 8)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_writeverf3(xdrs, objp)
	XDR *xdrs;
	writeverf3 objp;
{
	if (!xdr_opaque(xdrs, objp, 8)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_uid3(xdrs, objp)
	XDR *xdrs;
	uid3 *objp;
{
	if (!xdr_uint32(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_gid3(xdrs, objp)
	XDR *xdrs;
	gid3 *objp;
{
	if (!xdr_uint32(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_size3(xdrs, objp)
	XDR *xdrs;
	size3 *objp;
{
	if (!xdr_uint64(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_offset3(xdrs, objp)
	XDR *xdrs;
	offset3 *objp;
{
	if (!xdr_uint64(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_mode3(xdrs, objp)
	XDR *xdrs;
	mode3 *objp;
{
	if (!xdr_uint32(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_count3(xdrs, objp)
	XDR *xdrs;
	count3 *objp;
{
	if (!xdr_uint32(xdrs, objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_nfsstat3(xdrs, objp)
	XDR *xdrs;
	nfsstat3 *objp;
{
	if (!xdr_enum(xdrs, (enum_t *)objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_ftype3(xdrs, objp)
	XDR *xdrs;
	ftype3 *objp;
{
	if (!xdr_enum(xdrs, (enum_t *)objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_specdata3(xdrs, objp)
	XDR *xdrs;
	specdata3 *objp;
{
	if (!xdr_uint32(xdrs, &objp->specdata1)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->specdata2)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_nfs_fh3(xdrs, objp)
	XDR *xdrs;
	nfs_fh3 *objp;
{
	if (!xdr_bytes(xdrs, (char **)&objp->data.data_val, (u_int *)&objp->data.data_len, FHSIZE)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_nfstime3(xdrs, objp)
	XDR *xdrs;
	nfstime3 *objp;
{
	if (!xdr_uint32(xdrs, &objp->seconds)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->nseconds)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_fattr3(xdrs, objp)
	XDR *xdrs;
	fattr3 *objp;
{
	if (!xdr_ftype3(xdrs, &objp->type)) {
		return (FALSE);
	}
	if (!xdr_mode3(xdrs, &objp->mode)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->nlink)) {
		return (FALSE);
	}
	if (!xdr_uid3(xdrs, &objp->uid)) {
		return (FALSE);
	}
	if (!xdr_gid3(xdrs, &objp->gid)) {
		return (FALSE);
	}
	if (!xdr_u_hyper(xdrs, &objp->size)) {
		return (FALSE);
	}
	if (!xdr_u_hyper(xdrs, &objp->used)) {
		return (FALSE);
	}
	if (!xdr_specdata3(xdrs, &objp->rdev)) {
		return (FALSE);
	}
	if (!xdr_u_hyper(xdrs, &objp->fsid)) {
		return (FALSE);
	}
	if (!xdr_fileid3(xdrs, &objp->fileid)) {
		return (FALSE);
	}
	if (!xdr_nfstime3(xdrs, &objp->atime)) {
		return (FALSE);
	}
	if (!xdr_nfstime3(xdrs, &objp->mtime)) {
		return (FALSE);
	}
	if (!xdr_nfstime3(xdrs, &objp->ctime)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_post_op_attr(xdrs, objp)
	XDR *xdrs;
	post_op_attr *objp;
{
	if (!xdr_bool(xdrs, &objp->attributes_follow)) {
		return (FALSE);
	}
	switch (objp->attributes_follow) {
	case TRUE:
		if (!xdr_fattr3(xdrs, &objp->post_op_attr_u.attributes)) {
			return (FALSE);
		}
		break;
	case FALSE:
		break;
	default:
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_wcc_attr(xdrs, objp)
	XDR *xdrs;
	wcc_attr *objp;
{
	if (!xdr_size3(xdrs, &objp->size)) {
		return (FALSE);
	}
	if (!xdr_nfstime3(xdrs, &objp->mtime)) {
		return (FALSE);
	}
	if (!xdr_nfstime3(xdrs, &objp->ctime)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_pre_op_attr(xdrs, objp)
	XDR *xdrs;
	pre_op_attr *objp;
{
	if (!xdr_bool(xdrs, &objp->attributes_follow)) {
		return (FALSE);
	}
	switch (objp->attributes_follow) {
	case TRUE:
		if (!xdr_wcc_attr(xdrs, &objp->pre_op_attr_u.attributes)) {
			return (FALSE);
		}
		break;
	case FALSE:
		break;
	default:
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_wcc_data(xdrs, objp)
	XDR *xdrs;
	wcc_data *objp;
{
	if (!xdr_pre_op_attr(xdrs, &objp->before)) {
		return (FALSE);
	}
	if (!xdr_post_op_attr(xdrs, &objp->after)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_post_op_fh3(xdrs, objp)
	XDR *xdrs;
	post_op_fh3 *objp;
{
	if (!xdr_bool(xdrs, &objp->handle_follows)) {
		return (FALSE);
	}
	switch (objp->handle_follows) {
	case TRUE:
		if (!xdr_nfs_fh3(xdrs, &objp->post_op_fh3_u.handle)) {
			return (FALSE);
		}
		break;
	case FALSE:
		break;
	default:
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_time_how(xdrs, objp)
	XDR *xdrs;
	time_how *objp;
{
	if (!xdr_enum(xdrs, (enum_t *)objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_set_mode3(xdrs, objp)
	XDR *xdrs;
	set_mode3 *objp;
{
	if (!xdr_bool(xdrs, &objp->set_it)) {
		return (FALSE);
	}
	switch (objp->set_it) {
	case TRUE:
		if (!xdr_mode3(xdrs, &objp->set_mode3_u.mode)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_set_uid3(xdrs, objp)
	XDR *xdrs;
	set_uid3 *objp;
{
	if (!xdr_bool(xdrs, &objp->set_it)) {
		return (FALSE);
	}
	switch (objp->set_it) {
	case TRUE:
		if (!xdr_uid3(xdrs, &objp->set_uid3_u.uid)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_set_gid3(xdrs, objp)
	XDR *xdrs;
	set_gid3 *objp;
{
	if (!xdr_bool(xdrs, &objp->set_it)) {
		return (FALSE);
	}
	switch (objp->set_it) {
	case TRUE:
		if (!xdr_gid3(xdrs, &objp->set_gid3_u.gid)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_set_size3(xdrs, objp)
	XDR *xdrs;
	set_size3 *objp;
{
	if (!xdr_bool(xdrs, &objp->set_it)) {
		return (FALSE);
	}
	switch (objp->set_it) {
	case TRUE:
		if (!xdr_size3(xdrs, &objp->set_size3_u.size)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_set_atime(xdrs, objp)
	XDR *xdrs;
	set_atime *objp;
{
	if (!xdr_time_how(xdrs, &objp->set_it)) {
		return (FALSE);
	}
	switch (objp->set_it) {
	case SET_TO_CLIENT_TIME:
		if (!xdr_nfstime3(xdrs, &objp->set_atime_u.atime)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_set_mtime(xdrs, objp)
	XDR *xdrs;
	set_mtime *objp;
{
	if (!xdr_time_how(xdrs, &objp->set_it)) {
		return (FALSE);
	}
	switch (objp->set_it) {
	case SET_TO_CLIENT_TIME:
		if (!xdr_nfstime3(xdrs, &objp->set_mtime_u.mtime)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_sattr3(xdrs, objp)
	XDR *xdrs;
	sattr3 *objp;
{
	if (!xdr_set_mode3(xdrs, &objp->mode)) {
		return (FALSE);
	}
	if (!xdr_set_uid3(xdrs, &objp->uid)) {
		return (FALSE);
	}
	if (!xdr_set_gid3(xdrs, &objp->gid)) {
		return (FALSE);
	}
	if (!xdr_set_size3(xdrs, &objp->size)) {
		return (FALSE);
	}
	if (!xdr_set_atime(xdrs, &objp->atime)) {
		return (FALSE);
	}
	if (!xdr_set_mtime(xdrs, &objp->mtime)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_diropargs3(xdrs, objp)
	XDR *xdrs;
	diropargs3 *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->dir)) {
		return (FALSE);
	}
	if (!xdr_filename3(xdrs, &objp->name)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_GETATTR3args(xdrs, objp)
	XDR *xdrs;
	GETATTR3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_GETATTR3resok(xdrs, objp)
	XDR *xdrs;
	GETATTR3resok *objp;
{
	if (!xdr_fattr3(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_GETATTR3res(xdrs, objp)
	XDR *xdrs;
	GETATTR3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_GETATTR3resok(xdrs, &objp->GETATTR3res_u.resok)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_sattrguard3(xdrs, objp)
	XDR *xdrs;
	sattrguard3 *objp;
{
	if (!xdr_bool(xdrs, &objp->check)) {
		return (FALSE);
	}
	switch (objp->check) {
	case TRUE:
		if (!xdr_nfstime3(xdrs, &objp->sattrguard3_u.obj_ctime)) {
			return (FALSE);
		}
		break;
	case FALSE:
		break;
	default:
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_SETATTR3args(xdrs, objp)
	XDR *xdrs;
	SETATTR3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	if (!xdr_sattr3(xdrs, &objp->new_attributes)) {
		return (FALSE);
	}
	if (!xdr_sattrguard3(xdrs, &objp->guard)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_SETATTR3resok(xdrs, objp)
	XDR *xdrs;
	SETATTR3resok *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->obj_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_SETATTR3resfail(xdrs, objp)
	XDR *xdrs;
	SETATTR3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->obj_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_SETATTR3res(xdrs, objp)
	XDR *xdrs;
	SETATTR3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_SETATTR3resok(xdrs, &objp->SETATTR3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_SETATTR3resfail(xdrs, &objp->SETATTR3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_LOOKUP3args(xdrs, objp)
	XDR *xdrs;
	LOOKUP3args *objp;
{
	if (!xdr_diropargs3(xdrs, &objp->what)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_LOOKUP3resok(xdrs, objp)
	XDR *xdrs;
	LOOKUP3resok *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	if (!xdr_post_op_attr(xdrs, &objp->dir_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_LOOKUP3resfail(xdrs, objp)
	XDR *xdrs;
	LOOKUP3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->dir_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_LOOKUP3res(xdrs, objp)
	XDR *xdrs;
	LOOKUP3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_LOOKUP3resok(xdrs, &objp->LOOKUP3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_LOOKUP3resfail(xdrs, &objp->LOOKUP3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_ACCESS3args(xdrs, objp)
	XDR *xdrs;
	ACCESS3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->access)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_ACCESS3resok(xdrs, objp)
	XDR *xdrs;
	ACCESS3resok *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->access)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_ACCESS3resfail(xdrs, objp)
	XDR *xdrs;
	ACCESS3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_ACCESS3res(xdrs, objp)
	XDR *xdrs;
	ACCESS3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_ACCESS3resok(xdrs, &objp->ACCESS3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_ACCESS3resfail(xdrs, &objp->ACCESS3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_READLINK3args(xdrs, objp)
	XDR *xdrs;
	READLINK3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->symlink)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READLINK3resok(xdrs, objp)
	XDR *xdrs;
	READLINK3resok *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->symlink_attributes)) {
		return (FALSE);
	}
	if (!xdr_nfspath3(xdrs, &objp->data)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READLINK3resfail(xdrs, objp)
	XDR *xdrs;
	READLINK3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->symlink_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READLINK3res(xdrs, objp)
	XDR *xdrs;
	READLINK3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_READLINK3resok(xdrs, &objp->READLINK3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_READLINK3resfail(xdrs, &objp->READLINK3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_READ3args(xdrs, objp)
	XDR *xdrs;
	READ3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->file)) {
		return (FALSE);
	}
	if (!xdr_offset3(xdrs, &objp->offset)) {
		return (FALSE);
	}
	if (!xdr_count3(xdrs, &objp->count)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READ3resok(xdrs, objp)
	XDR *xdrs;
	READ3resok *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->file_attributes)) {
		return (FALSE);
	}
	if (!xdr_count3(xdrs, &objp->count)) {
		return (FALSE);
	}
	if (!xdr_bool(xdrs, &objp->eof)) {
		return (FALSE);
	}
	if (!xdr_bytes(xdrs, (char **)&objp->data.data_val, (u_int *)&objp->data.data_len, ~0)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READ3resfail(xdrs, objp)
	XDR *xdrs;
	READ3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->file_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READ3res(xdrs, objp)
	XDR *xdrs;
	READ3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_READ3resok(xdrs, &objp->READ3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_READ3resfail(xdrs, &objp->READ3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_stable_how(xdrs, objp)
	XDR *xdrs;
	stable_how *objp;
{
	if (!xdr_enum(xdrs, (enum_t *)objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_WRITE3args(xdrs, objp)
	XDR *xdrs;
	WRITE3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->file)) {
		return (FALSE);
	}
	if (!xdr_offset3(xdrs, &objp->offset)) {
		return (FALSE);
	}
	if (!xdr_count3(xdrs, &objp->count)) {
		return (FALSE);
	}
	if (!xdr_stable_how(xdrs, &objp->stable)) {
		return (FALSE);
	}
	if (!xdr_bytes(xdrs, (char **)&objp->data.data_val, (u_int *)&objp->data.data_len, ~0)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_WRITE3resok(xdrs, objp)
	XDR *xdrs;
	WRITE3resok *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->file_wcc)) {
		return (FALSE);
	}
	if (!xdr_count3(xdrs, &objp->count)) {
		return (FALSE);
	}
	if (!xdr_stable_how(xdrs, &objp->committed)) {
		return (FALSE);
	}
	if (!xdr_writeverf3(xdrs, objp->verf)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_WRITE3resfail(xdrs, objp)
	XDR *xdrs;
	WRITE3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->file_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_WRITE3res(xdrs, objp)
	XDR *xdrs;
	WRITE3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_WRITE3resok(xdrs, &objp->WRITE3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_WRITE3resfail(xdrs, &objp->WRITE3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_createmode3(xdrs, objp)
	XDR *xdrs;
	createmode3 *objp;
{
	if (!xdr_enum(xdrs, (enum_t *)objp)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_createhow3(xdrs, objp)
	XDR *xdrs;
	createhow3 *objp;
{
	if (!xdr_createmode3(xdrs, &objp->mode)) {
		return (FALSE);
	}
	switch (objp->mode) {
	case UNCHECKED:
		if (!xdr_sattr3(xdrs, &objp->createhow3_u.obj_attributes)) {
			return (FALSE);
		}
		break;
	case GUARDED:
		if (!xdr_sattr3(xdrs, &objp->createhow3_u.obj_attributes)) {
			return (FALSE);
		}
		break;
	case EXCLUSIVE:
		if (!xdr_createverf3(xdrs, &objp->createhow3_u.verf)) {
			return (FALSE);
		}
		break;
	default:
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_CREATE3args(xdrs, objp)
	XDR *xdrs;
	CREATE3args *objp;
{
	if (!xdr_diropargs3(xdrs, &objp->where)) {
		return (FALSE);
	}
	if (!xdr_createhow3(xdrs, &objp->how)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_CREATE3resok(xdrs, objp)
	XDR *xdrs;
	CREATE3resok *objp;
{
	if (!xdr_post_op_fh3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_CREATE3resfail(xdrs, objp)
	XDR *xdrs;
	CREATE3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_CREATE3res(xdrs, objp)
	XDR *xdrs;
	CREATE3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_CREATE3resok(xdrs, &objp->CREATE3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_CREATE3resfail(xdrs, &objp->CREATE3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_MKDIR3args(xdrs, objp)
	XDR *xdrs;
	MKDIR3args *objp;
{
	if (!xdr_diropargs3(xdrs, &objp->where)) {
		return (FALSE);
	}
	if (!xdr_sattr3(xdrs, &objp->attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_MKDIR3resok(xdrs, objp)
	XDR *xdrs;
	MKDIR3resok *objp;
{
	if (!xdr_post_op_fh3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_MKDIR3resfail(xdrs, objp)
	XDR *xdrs;
	MKDIR3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_MKDIR3res(xdrs, objp)
	XDR *xdrs;
	MKDIR3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_MKDIR3resok(xdrs, &objp->MKDIR3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_MKDIR3resfail(xdrs, &objp->MKDIR3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_symlinkdata3(xdrs, objp)
	XDR *xdrs;
	symlinkdata3 *objp;
{
	if (!xdr_sattr3(xdrs, &objp->symlink_attributes)) {
		return (FALSE);
	}
	if (!xdr_nfspath3(xdrs, &objp->symlink_data)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_SYMLINK3args(xdrs, objp)
	XDR *xdrs;
	SYMLINK3args *objp;
{
	if (!xdr_diropargs3(xdrs, &objp->where)) {
		return (FALSE);
	}
	if (!xdr_symlinkdata3(xdrs, &objp->symlink)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_SYMLINK3resok(xdrs, objp)
	XDR *xdrs;
	SYMLINK3resok *objp;
{
	if (!xdr_post_op_fh3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_SYMLINK3resfail(xdrs, objp)
	XDR *xdrs;
	SYMLINK3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_SYMLINK3res(xdrs, objp)
	XDR *xdrs;
	SYMLINK3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_SYMLINK3resok(xdrs, &objp->SYMLINK3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_SYMLINK3resfail(xdrs, &objp->SYMLINK3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_devicedata3(xdrs, objp)
	XDR *xdrs;
	devicedata3 *objp;
{
	if (!xdr_sattr3(xdrs, &objp->dev_attributes)) {
		return (FALSE);
	}
	if (!xdr_specdata3(xdrs, &objp->spec)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_mknoddata3(xdrs, objp)
	XDR *xdrs;
	mknoddata3 *objp;
{
	if (!xdr_ftype3(xdrs, &objp->type)) {
		return (FALSE);
	}
	switch (objp->type) {
	case NF3CHR:
		if (!xdr_devicedata3(xdrs, &objp->mknoddata3_u.device)) {
			return (FALSE);
		}
		break;
	case NF3BLK:
		if (!xdr_devicedata3(xdrs, &objp->mknoddata3_u.device)) {
			return (FALSE);
		}
		break;
	case NF3SOCK:
		if (!xdr_sattr3(xdrs, &objp->mknoddata3_u.pipe_attributes)) {
			return (FALSE);
		}
		break;
	case NF3FIFO:
		if (!xdr_sattr3(xdrs, &objp->mknoddata3_u.pipe_attributes)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_MKNOD3args(xdrs, objp)
	XDR *xdrs;
	MKNOD3args *objp;
{
	if (!xdr_diropargs3(xdrs, &objp->where)) {
		return (FALSE);
	}
	if (!xdr_mknoddata3(xdrs, &objp->what)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_MKNOD3resok(xdrs, objp)
	XDR *xdrs;
	MKNOD3resok *objp;
{
	if (!xdr_post_op_fh3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_MKNOD3resfail(xdrs, objp)
	XDR *xdrs;
	MKNOD3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_MKNOD3res(xdrs, objp)
	XDR *xdrs;
	MKNOD3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_MKNOD3resok(xdrs, &objp->MKNOD3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_MKNOD3resfail(xdrs, &objp->MKNOD3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_REMOVE3args(xdrs, objp)
	XDR *xdrs;
	REMOVE3args *objp;
{
	if (!xdr_diropargs3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_REMOVE3resok(xdrs, objp)
	XDR *xdrs;
	REMOVE3resok *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_REMOVE3resfail(xdrs, objp)
	XDR *xdrs;
	REMOVE3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_REMOVE3res(xdrs, objp)
	XDR *xdrs;
	REMOVE3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_REMOVE3resok(xdrs, &objp->REMOVE3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_REMOVE3resfail(xdrs, &objp->REMOVE3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_RMDIR3args(xdrs, objp)
	XDR *xdrs;
	RMDIR3args *objp;
{
	if (!xdr_diropargs3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_RMDIR3resok(xdrs, objp)
	XDR *xdrs;
	RMDIR3resok *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_RMDIR3resfail(xdrs, objp)
	XDR *xdrs;
	RMDIR3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->dir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_RMDIR3res(xdrs, objp)
	XDR *xdrs;
	RMDIR3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_RMDIR3resok(xdrs, &objp->RMDIR3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_RMDIR3resfail(xdrs, &objp->RMDIR3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_RENAME3args(xdrs, objp)
	XDR *xdrs;
	RENAME3args *objp;
{
	if (!xdr_diropargs3(xdrs, &objp->from)) {
		return (FALSE);
	}
	if (!xdr_diropargs3(xdrs, &objp->to)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_RENAME3resok(xdrs, objp)
	XDR *xdrs;
	RENAME3resok *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->fromdir_wcc)) {
		return (FALSE);
	}
	if (!xdr_wcc_data(xdrs, &objp->todir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_RENAME3resfail(xdrs, objp)
	XDR *xdrs;
	RENAME3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->fromdir_wcc)) {
		return (FALSE);
	}
	if (!xdr_wcc_data(xdrs, &objp->todir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_RENAME3res(xdrs, objp)
	XDR *xdrs;
	RENAME3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_RENAME3resok(xdrs, &objp->RENAME3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_RENAME3resfail(xdrs, &objp->RENAME3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_LINK3args(xdrs, objp)
	XDR *xdrs;
	LINK3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->file)) {
		return (FALSE);
	}
	if (!xdr_diropargs3(xdrs, &objp->link)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_LINK3resok(xdrs, objp)
	XDR *xdrs;
	LINK3resok *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->file_attributes)) {
		return (FALSE);
	}
	if (!xdr_wcc_data(xdrs, &objp->linkdir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_LINK3resfail(xdrs, objp)
	XDR *xdrs;
	LINK3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->file_attributes)) {
		return (FALSE);
	}
	if (!xdr_wcc_data(xdrs, &objp->linkdir_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_LINK3res(xdrs, objp)
	XDR *xdrs;
	LINK3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_LINK3resok(xdrs, &objp->LINK3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_LINK3resfail(xdrs, &objp->LINK3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_READDIR3args(xdrs, objp)
	XDR *xdrs;
	READDIR3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->dir)) {
		return (FALSE);
	}
	if (!xdr_cookie3(xdrs, &objp->cookie)) {
		return (FALSE);
	}
	if (!xdr_cookieverf3(xdrs, objp->cookieverf)) {
		return (FALSE);
	}
	if (!xdr_count3(xdrs, &objp->count)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_entry3(xdrs, objp)
	XDR *xdrs;
	entry3 *objp;
{
	if (!xdr_fileid3(xdrs, &objp->fileid)) {
		return (FALSE);
	}
	if (!xdr_filename3(xdrs, &objp->name)) {
		return (FALSE);
	}
	if (!xdr_cookie3(xdrs, &objp->cookie)) {
		return (FALSE);
	}
	if (!xdr_pointer(xdrs, (char **)&objp->nextentry, sizeof(entry3), xdr_entry3)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_dirlist3(xdrs, objp)
	XDR *xdrs;
	dirlist3 *objp;
{
	if (!xdr_pointer(xdrs, (char **)&objp->entries, sizeof(entry3), xdr_entry3)) {
		return (FALSE);
	}
	if (!xdr_bool(xdrs, &objp->eof)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READDIR3resok(xdrs, objp)
	XDR *xdrs;
	READDIR3resok *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->dir_attributes)) {
		return (FALSE);
	}
	if (!xdr_cookieverf3(xdrs, objp->cookieverf)) {
		return (FALSE);
	}
	if (!xdr_dirlist3(xdrs, &objp->reply)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READDIR3resfail(xdrs, objp)
	XDR *xdrs;
	READDIR3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->dir_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READDIR3res(xdrs, objp)
	XDR *xdrs;
	READDIR3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_READDIR3resok(xdrs, &objp->READDIR3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_READDIR3resfail(xdrs, &objp->READDIR3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_READDIRPLUS3args(xdrs, objp)
	XDR *xdrs;
	READDIRPLUS3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->dir)) {
		return (FALSE);
	}
	if (!xdr_cookie3(xdrs, &objp->cookie)) {
		return (FALSE);
	}
	if (!xdr_cookieverf3(xdrs, objp->cookieverf)) {
		return (FALSE);
	}
	if (!xdr_count3(xdrs, &objp->dircount)) {
		return (FALSE);
	}
	if (!xdr_count3(xdrs, &objp->maxcount)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_entryplus3(xdrs, objp)
	XDR *xdrs;
	entryplus3 *objp;
{
	if (!xdr_fileid3(xdrs, &objp->fileid)) {
		return (FALSE);
	}
	if (!xdr_filename3(xdrs, &objp->name)) {
		return (FALSE);
	}
	if (!xdr_cookie3(xdrs, &objp->cookie)) {
		return (FALSE);
	}
	if (!xdr_post_op_attr(xdrs, &objp->name_attributes)) {
		return (FALSE);
	}
	if (!xdr_post_op_fh3(xdrs, &objp->name_handle)) {
		return (FALSE);
	}
	if (!xdr_pointer(xdrs, (char **)&objp->nextentry, sizeof(entryplus3), xdr_entryplus3)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_dirlistplus3(xdrs, objp)
	XDR *xdrs;
	dirlistplus3 *objp;
{
	if (!xdr_pointer(xdrs, (char **)&objp->entries, sizeof(entryplus3), xdr_entryplus3)) {
		return (FALSE);
	}
	if (!xdr_bool(xdrs, &objp->eof)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READDIRPLUS3resok(xdrs, objp)
	XDR *xdrs;
	READDIRPLUS3resok *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->dir_attributes)) {
		return (FALSE);
	}
	if (!xdr_cookieverf3(xdrs, objp->cookieverf)) {
		return (FALSE);
	}
	if (!xdr_dirlistplus3(xdrs, &objp->reply)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READDIRPLUS3resfail(xdrs, objp)
	XDR *xdrs;
	READDIRPLUS3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->dir_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_READDIRPLUS3res(xdrs, objp)
	XDR *xdrs;
	READDIRPLUS3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_READDIRPLUS3resok(xdrs, &objp->READDIRPLUS3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_READDIRPLUS3resfail(xdrs, &objp->READDIRPLUS3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_FSSTAT3args(xdrs, objp)
	XDR *xdrs;
	FSSTAT3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->fsroot)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_FSSTAT3resok(xdrs, objp)
	XDR *xdrs;
	FSSTAT3resok *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	if (!xdr_size3(xdrs, &objp->tbytes)) {
		return (FALSE);
	}
	if (!xdr_size3(xdrs, &objp->fbytes)) {
		return (FALSE);
	}
	if (!xdr_size3(xdrs, &objp->abytes)) {
		return (FALSE);
	}
	if (!xdr_size3(xdrs, &objp->tfiles)) {
		return (FALSE);
	}
	if (!xdr_size3(xdrs, &objp->ffiles)) {
		return (FALSE);
	}
	if (!xdr_size3(xdrs, &objp->afiles)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->invarsec)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_FSSTAT3resfail(xdrs, objp)
	XDR *xdrs;
	FSSTAT3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_FSSTAT3res(xdrs, objp)
	XDR *xdrs;
	FSSTAT3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_FSSTAT3resok(xdrs, &objp->FSSTAT3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_FSSTAT3resfail(xdrs, &objp->FSSTAT3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_FSINFO3args(xdrs, objp)
	XDR *xdrs;
	FSINFO3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->fsroot)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_FSINFO3resok(xdrs, objp)
	XDR *xdrs;
	FSINFO3resok *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->rtmax)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->rtpref)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->rtmult)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->wtmax)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->wtpref)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->wtmult)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->dtpref)) {
		return (FALSE);
	}
	if (!xdr_size3(xdrs, &objp->maxfilesize)) {
		return (FALSE);
	}
	if (!xdr_nfstime3(xdrs, &objp->time_delta)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->properties)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_FSINFO3resfail(xdrs, objp)
	XDR *xdrs;
	FSINFO3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_FSINFO3res(xdrs, objp)
	XDR *xdrs;
	FSINFO3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_FSINFO3resok(xdrs, &objp->FSINFO3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_FSINFO3resfail(xdrs, &objp->FSINFO3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_PATHCONF3args(xdrs, objp)
	XDR *xdrs;
	PATHCONF3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->obj)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_PATHCONF3resok(xdrs, objp)
	XDR *xdrs;
	PATHCONF3resok *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->linkmax)) {
		return (FALSE);
	}
	if (!xdr_uint32(xdrs, &objp->name_max)) {
		return (FALSE);
	}
	if (!xdr_bool(xdrs, &objp->no_trunc)) {
		return (FALSE);
	}
	if (!xdr_bool(xdrs, &objp->chown_restricted)) {
		return (FALSE);
	}
	if (!xdr_bool(xdrs, &objp->case_insensitive)) {
		return (FALSE);
	}
	if (!xdr_bool(xdrs, &objp->case_preserving)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_PATHCONF3resfail(xdrs, objp)
	XDR *xdrs;
	PATHCONF3resfail *objp;
{
	if (!xdr_post_op_attr(xdrs, &objp->obj_attributes)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_PATHCONF3res(xdrs, objp)
	XDR *xdrs;
	PATHCONF3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_PATHCONF3resok(xdrs, &objp->PATHCONF3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_PATHCONF3resfail(xdrs, &objp->PATHCONF3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}




bool_t
xdr_COMMIT3args(xdrs, objp)
	XDR *xdrs;
	COMMIT3args *objp;
{
	if (!xdr_nfs_fh3(xdrs, &objp->file)) {
		return (FALSE);
	}
	if (!xdr_offset3(xdrs, &objp->offset)) {
		return (FALSE);
	}
	if (!xdr_count3(xdrs, &objp->count)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_COMMIT3resok(xdrs, objp)
	XDR *xdrs;
	COMMIT3resok *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->file_wcc)) {
		return (FALSE);
	}
	if (!xdr_writeverf3(xdrs, objp->verf)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_COMMIT3resfail(xdrs, objp)
	XDR *xdrs;
	COMMIT3resfail *objp;
{
	if (!xdr_wcc_data(xdrs, &objp->file_wcc)) {
		return (FALSE);
	}
	return (TRUE);
}




bool_t
xdr_COMMIT3res(xdrs, objp)
	XDR *xdrs;
	COMMIT3res *objp;
{
	if (!xdr_nfsstat3(xdrs, &objp->status)) {
		return (FALSE);
	}
	switch (objp->status) {
	case NFS3_OK:
		if (!xdr_COMMIT3resok(xdrs, &objp->COMMIT3res_u.resok)) {
			return (FALSE);
		}
		break;
	default:
		if (!xdr_COMMIT3resfail(xdrs, &objp->COMMIT3res_u.resfail)) {
			return (FALSE);
		}
		break;
	}
	return (TRUE);
}


