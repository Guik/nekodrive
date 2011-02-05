/*
 * Automatically generated by jrpcgen 1.0.7 on 27/08/2010
 * jrpcgen is part of the "Remote Tea.Net" ONC/RPC package for C#
 * See http://remotetea.sourceforge.net for details
 */
using NFSLibrary.Protocols.Commons;
using org.acplt.oncrpc;
using System.Net;
using org.acplt.oncrpc.server;

/**
 */
namespace NFSLibrary.Protocols.V3.RPC.Mount
{
    public abstract class NFSv3MountProtocolServerStub : OncRpcServerStub, OncRpcDispatchable
    {

        public NFSv3MountProtocolServerStub()
            : this(0)
        { }

        public NFSv3MountProtocolServerStub(int port)
            : this(null, port)
        { }

        public NFSv3MountProtocolServerStub(IPAddress bindAddr, int port)
        {
            info = new OncRpcServerTransportRegistrationInfo[] {
            new OncRpcServerTransportRegistrationInfo(NFSv3MountProtocol.MOUNTPROG, 3),
        };

            transports = new OncRpcServerTransport[] {
            new OncRpcUdpServerTransport(this, bindAddr, port, info, 32768),
            new OncRpcTcpServerTransport(this, bindAddr, port, info, 32768)
        };
        }

        public void dispatchOncRpcCall(OncRpcCallInformation call, int program, int version, int procedure)
        {
            if (version == 3)
            {
                switch (procedure)
                {
                    case 0:
                        {
                            call.retrieveCall(XdrVoid.XDR_VOID);
                            MOUNTPROC3_NULL();
                            call.reply(XdrVoid.XDR_VOID);

                            break;
                        }
                    case 1:
                        {
                            Name args_ = new Name();
                            call.retrieveCall(args_);

                            MountStatus result_ = MOUNTPROC3_MNT(args_);
                            call.reply(result_);

                            break;
                        }
                    case 2:
                        {
                            call.retrieveCall(XdrVoid.XDR_VOID);
                            MountList result_ = MOUNTPROC3_DUMP();
                            call.reply(result_);

                            break;
                        }
                    case 3:
                        {
                            Name args_ = new Name();
                            call.retrieveCall(args_);

                            MOUNTPROC3_UMNT(args_);
                            call.reply(XdrVoid.XDR_VOID);

                            break;
                        }
                    case 4:
                        {
                            call.retrieveCall(XdrVoid.XDR_VOID);
                            MOUNTPROC3_UMNTALL();
                            call.reply(XdrVoid.XDR_VOID);

                            break;
                        }
                    case 5:
                        {
                            call.retrieveCall(XdrVoid.XDR_VOID);
                            Exports result_ = MOUNTPROC3_EXPORT();
                            call.reply(result_);
                            
                            break;
                        }
                    default:
                        {
                            call.failProcedureUnavailable();
                            break;
                        }
                }
            }
            else
            { call.failProgramUnavailable(); }
        }

        public abstract void MOUNTPROC3_NULL();

        public abstract MountStatus MOUNTPROC3_MNT(Name arg1);

        public abstract MountList MOUNTPROC3_DUMP();

        public abstract void MOUNTPROC3_UMNT(Name arg1);

        public abstract void MOUNTPROC3_UMNTALL();

        public abstract Exports MOUNTPROC3_EXPORT();

    }
    // End of NFSv3MountProtocolServerStub.cs
}