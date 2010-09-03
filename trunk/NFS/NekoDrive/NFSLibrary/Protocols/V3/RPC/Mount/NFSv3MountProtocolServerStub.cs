/*
 * Automatically generated by jrpcgen 1.0.7 on 27/08/2010
 * jrpcgen is part of the "Remote Tea.Net" ONC/RPC package for C#
 * See http://remotetea.sourceforge.net for details
 */
using org.acplt.oncrpc;

using System.Net;

using org.acplt.oncrpc.server;

/**
 */
public abstract class NFSv3MountProtocolServerStub : OncRpcServerStub, OncRpcDispatchable {

    public NFSv3MountProtocolServerStub() : this(0) {
    }

    public NFSv3MountProtocolServerStub(int port) : this(null, port) {
    }

    public NFSv3MountProtocolServerStub(IPAddress bindAddr, int port)
           {
        info = new OncRpcServerTransportRegistrationInfo [] {
            new OncRpcServerTransportRegistrationInfo(NFSv3MountProtocol.MOUNT_PROGRAM, 3),
        };
        transports = new OncRpcServerTransport [] {
            new OncRpcUdpServerTransport(this, bindAddr, port, info, 32768),
            new OncRpcTcpServerTransport(this, bindAddr, port, info, 32768)
        };
    }

    public void dispatchOncRpcCall(OncRpcCallInformation call, int program, int version, int procedure)
            {
        if ( version == 3 ) {
            switch ( procedure ) {
            case 0: {
                call.retrieveCall(XdrVoid.XDR_VOID);
                MOUNTPROC3_NULL_3();
                call.reply(XdrVoid.XDR_VOID);
                break;
            }
            case 1: {
                dirpath args_ = new dirpath();
                call.retrieveCall(args_);
                mountres3 result_ = MOUNTPROC3_MNT_3(args_);
                call.reply(result_);
                break;
            }
            case 2: {
                call.retrieveCall(XdrVoid.XDR_VOID);
                mountlist3 result_ = MOUNTPROC3_DUMP_3();
                call.reply(result_);
                break;
            }
            case 3: {
                dirpath args_ = new dirpath();
                call.retrieveCall(args_);
                MOUNTPROC3_UMNT_3(args_);
                call.reply(XdrVoid.XDR_VOID);
                break;
            }
            case 4: {
                call.retrieveCall(XdrVoid.XDR_VOID);
                MOUNTPROC3_UMNTALL_3();
                call.reply(XdrVoid.XDR_VOID);
                break;
            }
            case 5: {
                call.retrieveCall(XdrVoid.XDR_VOID);
                exports3 result_ = MOUNTPROC3_EXPORT_3();
                call.reply(result_);
                break;
            }
            default:
                call.failProcedureUnavailable();
                break;
            }
        } else {
            call.failProgramUnavailable();
        }
    }

    public abstract void MOUNTPROC3_NULL_3();

    public abstract mountres3 MOUNTPROC3_MNT_3(dirpath arg1);

    public abstract mountlist3 MOUNTPROC3_DUMP_3();

    public abstract void MOUNTPROC3_UMNT_3(dirpath arg1);

    public abstract void MOUNTPROC3_UMNTALL_3();

    public abstract exports3 MOUNTPROC3_EXPORT_3();

}
// End of NFSv3MountProtocolServerStub.cs