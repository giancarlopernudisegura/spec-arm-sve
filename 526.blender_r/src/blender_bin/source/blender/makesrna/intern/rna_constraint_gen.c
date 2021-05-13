
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Struct;
extern StructRNA RNA_Property;
extern StructRNA RNA_BoolProperty;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Function;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_ID;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_Library;
extern StructRNA RNA_Texture;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_OceanTexData;
extern StructRNA RNA_OceanTexture;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_ColorMapping;
extern StructRNA RNA_Action;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_AnimDataDrivers;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_SteeringActuator;
extern StructRNA RNA_MouseActuator;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_Bone;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushCapabilities;
extern StructRNA RNA_SculptToolCapabilities;
extern StructRNA RNA_ImapaintToolCapabilities;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_Camera;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoints;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_ColorManagedDisplaySettings;
extern StructRNA RNA_ColorManagedViewSettings;
extern StructRNA RNA_ColorManagedInputColorspaceSettings;
extern StructRNA RNA_ColorManagedSequencerColorspaceSettings;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_FollowTrackConstraint;
extern StructRNA RNA_CameraSolverConstraint;
extern StructRNA RNA_ObjectSolverConstraint;
extern StructRNA RNA_Context;
extern StructRNA RNA_Controller;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_AndController;
extern StructRNA RNA_OrController;
extern StructRNA RNA_NorController;
extern StructRNA RNA_NandController;
extern StructRNA RNA_XorController;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_DynamicPaintCanvasSettings;
extern StructRNA RNA_DynamicPaintSurfaces;
extern StructRNA RNA_DynamicPaintBrushSettings;
extern StructRNA RNA_DynamicPaintSurface;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_Driver;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoints;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidMeshVertex;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_GreasePencilLayers;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilFrames;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilStrokes;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoints;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_RenderSlot;
extern StructRNA RNA_RenderSlots;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_Key;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_LineStyleModifier;
extern StructRNA RNA_LineStyleColorModifier;
extern StructRNA RNA_LineStyleColorModifier_AlongStroke;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleColorModifier_Material;
extern StructRNA RNA_LineStyleAlphaModifier;
extern StructRNA RNA_LineStyleAlphaModifier_AlongStroke;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleAlphaModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier;
extern StructRNA RNA_LineStyleThicknessModifier_AlongStroke;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleThicknessModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier_Calligraphy;
extern StructRNA RNA_LineStyleGeometryModifier;
extern StructRNA RNA_LineStyleGeometryModifier_Sampling;
extern StructRNA RNA_LineStyleGeometryModifier_BezierCurve;
extern StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement;
extern StructRNA RNA_LineStyleGeometryModifier_SpatialNoise;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D;
extern StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher;
extern StructRNA RNA_LineStyleGeometryModifier_TipRemover;
extern StructRNA RNA_LineStyleGeometryModifier_Polygonalization;
extern StructRNA RNA_LineStyleGeometryModifier_GuidingLines;
extern StructRNA RNA_LineStyleGeometryModifier_Blueprint;
extern StructRNA RNA_LineStyleGeometryModifier_2DOffset;
extern StructRNA RNA_LineStyleGeometryModifier_2DTransform;
extern StructRNA RNA_FreestyleLineStyle;
extern StructRNA RNA_LineStyleTextureSlots;
extern StructRNA RNA_LineStyleColorModifiers;
extern StructRNA RNA_LineStyleAlphaModifiers;
extern StructRNA RNA_LineStyleThicknessModifiers;
extern StructRNA RNA_LineStyleGeometryModifiers;
extern StructRNA RNA_LineStyleTextureSlot;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataSpeakers;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataMovieClips;
extern StructRNA RNA_BlendDataMasks;
extern StructRNA RNA_BlendDataLineStyles;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_TexPaintSlot;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialGameSettings;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshTessFaces;
extern StructRNA RNA_MeshLoops;
extern StructRNA RNA_MeshPolygons;
extern StructRNA RNA_UVLoopLayers;
extern StructRNA RNA_TessfaceUVTextures;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_LoopColors;
extern StructRNA RNA_FloatProperties;
extern StructRNA RNA_IntProperties;
extern StructRNA RNA_StringProperties;
extern StructRNA RNA_MeshSkinVertexLayer;
extern StructRNA RNA_MeshSkinVertex;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshTessFace;
extern StructRNA RNA_MeshLoop;
extern StructRNA RNA_MeshPolygon;
extern StructRNA RNA_MeshUVLoopLayer;
extern StructRNA RNA_MeshUVLoop;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTexturePolyLayer;
extern StructRNA RNA_MeshTexturePoly;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshLoopColorLayer;
extern StructRNA RNA_MeshLoopColor;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_WarpModifier;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_UVWarpModifier;
extern StructRNA RNA_VertexWeightEditModifier;
extern StructRNA RNA_VertexWeightMixModifier;
extern StructRNA RNA_VertexWeightProximityModifier;
extern StructRNA RNA_DynamicPaintModifier;
extern StructRNA RNA_OceanModifier;
extern StructRNA RNA_RemeshModifier;
extern StructRNA RNA_SkinModifier;
extern StructRNA RNA_LaplacianSmoothModifier;
extern StructRNA RNA_TriangulateModifier;
extern StructRNA RNA_MeshCacheModifier;
extern StructRNA RNA_LaplacianDeformModifier;
extern StructRNA RNA_WireframeModifier;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeSocketInterface;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeInputs;
extern StructRNA RNA_NodeOutputs;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeInternalSocketTemplate;
extern StructRNA RNA_NodeInternal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_Nodes;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeTreeInputs;
extern StructRNA RNA_NodeTreeOutputs;
extern StructRNA RNA_NodeSocketStandard;
extern StructRNA RNA_NodeSocketInterfaceStandard;
extern StructRNA RNA_NodeSocketFloat;
extern StructRNA RNA_NodeSocketInterfaceFloat;
extern StructRNA RNA_NodeSocketFloatUnsigned;
extern StructRNA RNA_NodeSocketInterfaceFloatUnsigned;
extern StructRNA RNA_NodeSocketFloatPercentage;
extern StructRNA RNA_NodeSocketInterfaceFloatPercentage;
extern StructRNA RNA_NodeSocketFloatFactor;
extern StructRNA RNA_NodeSocketInterfaceFloatFactor;
extern StructRNA RNA_NodeSocketFloatAngle;
extern StructRNA RNA_NodeSocketInterfaceFloatAngle;
extern StructRNA RNA_NodeSocketFloatTime;
extern StructRNA RNA_NodeSocketInterfaceFloatTime;
extern StructRNA RNA_NodeSocketInt;
extern StructRNA RNA_NodeSocketInterfaceInt;
extern StructRNA RNA_NodeSocketIntUnsigned;
extern StructRNA RNA_NodeSocketInterfaceIntUnsigned;
extern StructRNA RNA_NodeSocketIntPercentage;
extern StructRNA RNA_NodeSocketInterfaceIntPercentage;
extern StructRNA RNA_NodeSocketIntFactor;
extern StructRNA RNA_NodeSocketInterfaceIntFactor;
extern StructRNA RNA_NodeSocketBool;
extern StructRNA RNA_NodeSocketInterfaceBool;
extern StructRNA RNA_NodeSocketVector;
extern StructRNA RNA_NodeSocketInterfaceVector;
extern StructRNA RNA_NodeSocketVectorTranslation;
extern StructRNA RNA_NodeSocketInterfaceVectorTranslation;
extern StructRNA RNA_NodeSocketVectorDirection;
extern StructRNA RNA_NodeSocketInterfaceVectorDirection;
extern StructRNA RNA_NodeSocketVectorVelocity;
extern StructRNA RNA_NodeSocketInterfaceVectorVelocity;
extern StructRNA RNA_NodeSocketVectorAcceleration;
extern StructRNA RNA_NodeSocketInterfaceVectorAcceleration;
extern StructRNA RNA_NodeSocketVectorEuler;
extern StructRNA RNA_NodeSocketInterfaceVectorEuler;
extern StructRNA RNA_NodeSocketVectorXYZ;
extern StructRNA RNA_NodeSocketInterfaceVectorXYZ;
extern StructRNA RNA_NodeSocketColor;
extern StructRNA RNA_NodeSocketInterfaceColor;
extern StructRNA RNA_NodeSocketString;
extern StructRNA RNA_NodeSocketInterfaceString;
extern StructRNA RNA_NodeSocketShader;
extern StructRNA RNA_NodeSocketInterfaceShader;
extern StructRNA RNA_NodeSocketVirtual;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeFrame;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeGroupInput;
extern StructRNA RNA_NodeGroupOutput;
extern StructRNA RNA_NodeReroute;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeGamma;
extern StructRNA RNA_ShaderNodeBrightContrast;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeLampData;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeOutputMaterial;
extern StructRNA RNA_ShaderNodeOutputLamp;
extern StructRNA RNA_ShaderNodeOutputWorld;
extern StructRNA RNA_ShaderNodeOutputLineStyle;
extern StructRNA RNA_ShaderNodeFresnel;
extern StructRNA RNA_ShaderNodeLayerWeight;
extern StructRNA RNA_ShaderNodeMixShader;
extern StructRNA RNA_ShaderNodeAddShader;
extern StructRNA RNA_ShaderNodeAttribute;
extern StructRNA RNA_ShaderNodeAmbientOcclusion;
extern StructRNA RNA_ShaderNodeBackground;
extern StructRNA RNA_ShaderNodeHoldout;
extern StructRNA RNA_ShaderNodeBsdfAnisotropic;
extern StructRNA RNA_ShaderNodeBsdfDiffuse;
extern StructRNA RNA_ShaderNodeBsdfGlossy;
extern StructRNA RNA_ShaderNodeBsdfGlass;
extern StructRNA RNA_ShaderNodeBsdfRefraction;
extern StructRNA RNA_ShaderNodeBsdfTranslucent;
extern StructRNA RNA_ShaderNodeBsdfTransparent;
extern StructRNA RNA_ShaderNodeBsdfVelvet;
extern StructRNA RNA_ShaderNodeBsdfToon;
extern StructRNA RNA_ShaderNodeBsdfHair;
extern StructRNA RNA_ShaderNodeSubsurfaceScattering;
extern StructRNA RNA_ShaderNodeVolumeAbsorption;
extern StructRNA RNA_ShaderNodeVolumeScatter;
extern StructRNA RNA_ShaderNodeEmission;
extern StructRNA RNA_ShaderNodeNewGeometry;
extern StructRNA RNA_ShaderNodeLightPath;
extern StructRNA RNA_ShaderNodeLightFalloff;
extern StructRNA RNA_ShaderNodeObjectInfo;
extern StructRNA RNA_ShaderNodeParticleInfo;
extern StructRNA RNA_ShaderNodeHairInfo;
extern StructRNA RNA_ShaderNodeWireframe;
extern StructRNA RNA_ShaderNodeWavelength;
extern StructRNA RNA_ShaderNodeBlackbody;
extern StructRNA RNA_ShaderNodeBump;
extern StructRNA RNA_ShaderNodeNormalMap;
extern StructRNA RNA_ShaderNodeTangent;
extern StructRNA RNA_ShaderNodeScript;
extern StructRNA RNA_ShaderNodeTexImage;
extern StructRNA RNA_ShaderNodeTexEnvironment;
extern StructRNA RNA_ShaderNodeTexSky;
extern StructRNA RNA_ShaderNodeTexGradient;
extern StructRNA RNA_ShaderNodeTexNoise;
extern StructRNA RNA_ShaderNodeTexMagic;
extern StructRNA RNA_ShaderNodeTexWave;
extern StructRNA RNA_ShaderNodeTexMusgrave;
extern StructRNA RNA_ShaderNodeTexVoronoi;
extern StructRNA RNA_ShaderNodeTexChecker;
extern StructRNA RNA_ShaderNodeTexBrick;
extern StructRNA RNA_ShaderNodeTexCoord;
extern StructRNA RNA_ShaderNodeVectorTransform;
extern StructRNA RNA_ShaderNodeSeparateHSV;
extern StructRNA RNA_ShaderNodeCombineHSV;
extern StructRNA RNA_ShaderNodeUVMap;
extern StructRNA RNA_ShaderNodeUVAlongStroke;
extern StructRNA RNA_ShaderNodeSeparateXYZ;
extern StructRNA RNA_ShaderNodeCombineXYZ;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMapRange;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodeOutputFileFileSlots;
extern StructRNA RNA_CompositorNodeOutputFileLayerSlots;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeInpaint;
extern StructRNA RNA_CompositorNodeDespeckle;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeDoubleEdgeMask;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeMovieClip;
extern StructRNA RNA_CompositorNodeTransform;
extern StructRNA RNA_CompositorNodeStabilize;
extern StructRNA RNA_CompositorNodeMovieDistortion;
extern StructRNA RNA_CompositorNodeBoxMask;
extern StructRNA RNA_CompositorNodeEllipseMask;
extern StructRNA RNA_CompositorNodeBokehImage;
extern StructRNA RNA_CompositorNodeBokehBlur;
extern StructRNA RNA_CompositorNodeSwitch;
extern StructRNA RNA_CompositorNodeColorCorrection;
extern StructRNA RNA_CompositorNodeMask;
extern StructRNA RNA_CompositorNodeKeyingScreen;
extern StructRNA RNA_CompositorNodeKeying;
extern StructRNA RNA_CompositorNodeTrackPos;
extern StructRNA RNA_CompositorNodePixelate;
extern StructRNA RNA_CompositorNodePlaneTrackDeform;
extern StructRNA RNA_CompositorNodeCornerPin;
extern StructRNA RNA_CompositorNodeSunBeams;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeAt;
extern StructRNA RNA_TextureNodeTexVoronoi;
extern StructRNA RNA_TextureNodeTexBlend;
extern StructRNA RNA_TextureNodeTexMagic;
extern StructRNA RNA_TextureNodeTexMarble;
extern StructRNA RNA_TextureNodeTexClouds;
extern StructRNA RNA_TextureNodeTexWood;
extern StructRNA RNA_TextureNodeTexMusgrave;
extern StructRNA RNA_TextureNodeTexNoise;
extern StructRNA RNA_TextureNodeTexStucci;
extern StructRNA RNA_TextureNodeTexDistNoise;
extern StructRNA RNA_ShaderNodeGroup;
extern StructRNA RNA_CompositorNodeGroup;
extern StructRNA RNA_TextureNodeGroup;
extern StructRNA RNA_NodeCustomGroup;
extern StructRNA RNA_NodeOutputFileSlotFile;
extern StructRNA RNA_NodeOutputFileSlotLayer;
extern StructRNA RNA_NodeInstanceHash;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_LodLevel;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_Pose;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_BakePixel;
extern StructRNA RNA_RigidBodyWorld;
extern StructRNA RNA_RigidBodyObject;
extern StructRNA RNA_RigidBodyConstraint;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_UnifiedPaintSettings;
extern StructRNA RNA_MeshStatVis;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_ImageFormatSettings;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneGameRecastData;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_SelectedUvElement;
extern StructRNA RNA_FFmpegSettings;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_BakeSettings;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_FreestyleLineSet;
extern StructRNA RNA_FreestyleModuleSettings;
extern StructRNA RNA_FreestyleSettings;
extern StructRNA RNA_FreestyleModules;
extern StructRNA RNA_Linesets;
extern StructRNA RNA_Screen;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaSpaces;
extern StructRNA RNA_Region;
extern StructRNA RNA_View2D;
extern StructRNA RNA_PaletteColor;
extern StructRNA RNA_Palette;
extern StructRNA RNA_PaintCurve;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_UvSculpt;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_SequenceColorBalanceData;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceModifiers;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_Sequences;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_SequenceElements;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MovieClipSequence;
extern StructRNA RNA_MaskSequence;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_AddSequence;
extern StructRNA RNA_AdjustmentSequence;
extern StructRNA RNA_AlphaOverSequence;
extern StructRNA RNA_AlphaUnderSequence;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CrossSequence;
extern StructRNA RNA_GammaCrossSequence;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiplySequence;
extern StructRNA RNA_OverDropSequence;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_SubtractSequence;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_GaussianBlurSequence;
extern StructRNA RNA_SequenceModifier;
extern StructRNA RNA_ColorBalanceModifier;
extern StructRNA RNA_CurvesModifier;
extern StructRNA RNA_HueCorrectModifier;
extern StructRNA RNA_BrightContrastModifier;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_BackgroundImages;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_NodeTreePath;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceNodeEditorPath;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceClipEditor;
extern StructRNA RNA_Speaker;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_Text;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_Sound;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_Panel;
extern StructRNA RNA_UIList;
extern StructRNA RNA_Header;
extern StructRNA RNA_Menu;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_ThemePanelColors;
extern StructRNA RNA_ThemeGradientColors;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeSpaceGeneric;
extern StructRNA RNA_ThemeSpaceGradient;
extern StructRNA RNA_ThemeSpaceListGeneric;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeClipEditor;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_Theme;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_WalkNavigation;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_Addons;
extern StructRNA RNA_PathCompareCollection;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_Addon;
extern StructRNA RNA_AddonPreferences;
extern StructRNA RNA_PathCompare;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_Macro;
extern StructRNA RNA_OperatorMacro;
extern StructRNA RNA_Event;
extern StructRNA RNA_Timer;
extern StructRNA RNA_UIPopupMenu;
extern StructRNA RNA_UIPieMenu;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_MovieClip;
extern StructRNA RNA_MovieClipProxy;
extern StructRNA RNA_MovieClipUser;
extern StructRNA RNA_MovieClipScopes;
extern StructRNA RNA_MovieTrackingSettings;
extern StructRNA RNA_MovieTrackingCamera;
extern StructRNA RNA_MovieTrackingMarker;
extern StructRNA RNA_MovieTrackingTrack;
extern StructRNA RNA_MovieTrackingMarkers;
extern StructRNA RNA_MovieTrackingPlaneMarker;
extern StructRNA RNA_MovieTrackingPlaneTrack;
extern StructRNA RNA_MovieTrackingPlaneMarkers;
extern StructRNA RNA_MovieTrackingTracks;
extern StructRNA RNA_MovieTrackingPlaneTracks;
extern StructRNA RNA_MovieTrackingObjectTracks;
extern StructRNA RNA_MovieTrackingObjectPlaneTracks;
extern StructRNA RNA_MovieTrackingStabilization;
extern StructRNA RNA_MovieTrackingReconstructedCameras;
extern StructRNA RNA_MovieReconstructedCamera;
extern StructRNA RNA_MovieTrackingReconstruction;
extern StructRNA RNA_MovieTrackingObject;
extern StructRNA RNA_MovieTrackingDopesheet;
extern StructRNA RNA_MovieTracking;
extern StructRNA RNA_MovieTrackingObjects;
extern StructRNA RNA_MaskParent;
extern StructRNA RNA_MaskSplinePointUW;
extern StructRNA RNA_MaskSplinePoint;
extern StructRNA RNA_MaskSpline;
extern StructRNA RNA_MaskSplines;
extern StructRNA RNA_MaskSplinePoints;
extern StructRNA RNA_MaskLayer;
extern StructRNA RNA_Mask;
extern StructRNA RNA_MaskLayers;

#include "rna_constraint.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_Constraint_rna_properties;
PointerPropertyRNA rna_Constraint_rna_type;
StringPropertyRNA rna_Constraint_name;
EnumPropertyRNA rna_Constraint_type;
EnumPropertyRNA rna_Constraint_owner_space;
EnumPropertyRNA rna_Constraint_target_space;
BoolPropertyRNA rna_Constraint_mute;
BoolPropertyRNA rna_Constraint_show_expanded;
BoolPropertyRNA rna_Constraint_is_valid;
BoolPropertyRNA rna_Constraint_active;
BoolPropertyRNA rna_Constraint_is_proxy_local;
FloatPropertyRNA rna_Constraint_influence;
FloatPropertyRNA rna_Constraint_error_location;
FloatPropertyRNA rna_Constraint_error_rotation;


CollectionPropertyRNA rna_ConstraintTarget_rna_properties;
PointerPropertyRNA rna_ConstraintTarget_rna_type;
PointerPropertyRNA rna_ConstraintTarget_target;
StringPropertyRNA rna_ConstraintTarget_subtarget;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_ChildOfConstraint_target;
StringPropertyRNA rna_ChildOfConstraint_subtarget;
BoolPropertyRNA rna_ChildOfConstraint_use_location_x;
BoolPropertyRNA rna_ChildOfConstraint_use_location_y;
BoolPropertyRNA rna_ChildOfConstraint_use_location_z;
BoolPropertyRNA rna_ChildOfConstraint_use_rotation_x;
BoolPropertyRNA rna_ChildOfConstraint_use_rotation_y;
BoolPropertyRNA rna_ChildOfConstraint_use_rotation_z;
BoolPropertyRNA rna_ChildOfConstraint_use_scale_x;
BoolPropertyRNA rna_ChildOfConstraint_use_scale_y;
BoolPropertyRNA rna_ChildOfConstraint_use_scale_z;
FloatPropertyRNA rna_ChildOfConstraint_inverse_matrix;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

CollectionPropertyRNA rna_PythonConstraint_targets;
IntPropertyRNA rna_PythonConstraint_target_count;
PointerPropertyRNA rna_PythonConstraint_text;
BoolPropertyRNA rna_PythonConstraint_use_targets;
BoolPropertyRNA rna_PythonConstraint_has_script_error;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

FloatPropertyRNA rna_StretchToConstraint_head_tail;
PointerPropertyRNA rna_StretchToConstraint_target;
StringPropertyRNA rna_StretchToConstraint_subtarget;
EnumPropertyRNA rna_StretchToConstraint_volume;
EnumPropertyRNA rna_StretchToConstraint_keep_axis;
FloatPropertyRNA rna_StretchToConstraint_rest_length;
FloatPropertyRNA rna_StretchToConstraint_bulge;
BoolPropertyRNA rna_StretchToConstraint_use_bulge_min;
BoolPropertyRNA rna_StretchToConstraint_use_bulge_max;
FloatPropertyRNA rna_StretchToConstraint_bulge_min;
FloatPropertyRNA rna_StretchToConstraint_bulge_max;
FloatPropertyRNA rna_StretchToConstraint_bulge_smooth;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_FollowPathConstraint_target;
FloatPropertyRNA rna_FollowPathConstraint_offset;
FloatPropertyRNA rna_FollowPathConstraint_offset_factor;
EnumPropertyRNA rna_FollowPathConstraint_forward_axis;
EnumPropertyRNA rna_FollowPathConstraint_up_axis;
BoolPropertyRNA rna_FollowPathConstraint_use_curve_follow;
BoolPropertyRNA rna_FollowPathConstraint_use_fixed_location;
BoolPropertyRNA rna_FollowPathConstraint_use_curve_radius;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

FloatPropertyRNA rna_LockedTrackConstraint_head_tail;
PointerPropertyRNA rna_LockedTrackConstraint_target;
StringPropertyRNA rna_LockedTrackConstraint_subtarget;
EnumPropertyRNA rna_LockedTrackConstraint_track_axis;
EnumPropertyRNA rna_LockedTrackConstraint_lock_axis;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_ActionConstraint_target;
StringPropertyRNA rna_ActionConstraint_subtarget;
EnumPropertyRNA rna_ActionConstraint_transform_channel;
PointerPropertyRNA rna_ActionConstraint_action;
BoolPropertyRNA rna_ActionConstraint_use_bone_object_action;
IntPropertyRNA rna_ActionConstraint_frame_start;
IntPropertyRNA rna_ActionConstraint_frame_end;
FloatPropertyRNA rna_ActionConstraint_max;
FloatPropertyRNA rna_ActionConstraint_min;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_CopyScaleConstraint_target;
StringPropertyRNA rna_CopyScaleConstraint_subtarget;
BoolPropertyRNA rna_CopyScaleConstraint_use_x;
BoolPropertyRNA rna_CopyScaleConstraint_use_y;
BoolPropertyRNA rna_CopyScaleConstraint_use_z;
BoolPropertyRNA rna_CopyScaleConstraint_use_offset;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

EnumPropertyRNA rna_MaintainVolumeConstraint_free_axis;
FloatPropertyRNA rna_MaintainVolumeConstraint_volume;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

FloatPropertyRNA rna_CopyLocationConstraint_head_tail;
PointerPropertyRNA rna_CopyLocationConstraint_target;
StringPropertyRNA rna_CopyLocationConstraint_subtarget;
BoolPropertyRNA rna_CopyLocationConstraint_use_x;
BoolPropertyRNA rna_CopyLocationConstraint_use_y;
BoolPropertyRNA rna_CopyLocationConstraint_use_z;
BoolPropertyRNA rna_CopyLocationConstraint_invert_x;
BoolPropertyRNA rna_CopyLocationConstraint_invert_y;
BoolPropertyRNA rna_CopyLocationConstraint_invert_z;
BoolPropertyRNA rna_CopyLocationConstraint_use_offset;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_CopyRotationConstraint_target;
StringPropertyRNA rna_CopyRotationConstraint_subtarget;
BoolPropertyRNA rna_CopyRotationConstraint_use_x;
BoolPropertyRNA rna_CopyRotationConstraint_use_y;
BoolPropertyRNA rna_CopyRotationConstraint_use_z;
BoolPropertyRNA rna_CopyRotationConstraint_invert_x;
BoolPropertyRNA rna_CopyRotationConstraint_invert_y;
BoolPropertyRNA rna_CopyRotationConstraint_invert_z;
BoolPropertyRNA rna_CopyRotationConstraint_use_offset;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

FloatPropertyRNA rna_CopyTransformsConstraint_head_tail;
PointerPropertyRNA rna_CopyTransformsConstraint_target;
StringPropertyRNA rna_CopyTransformsConstraint_subtarget;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_FloorConstraint_target;
StringPropertyRNA rna_FloorConstraint_subtarget;
EnumPropertyRNA rna_FloorConstraint_floor_location;
BoolPropertyRNA rna_FloorConstraint_use_sticky;
BoolPropertyRNA rna_FloorConstraint_use_rotation;
FloatPropertyRNA rna_FloorConstraint_offset;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

FloatPropertyRNA rna_TrackToConstraint_head_tail;
PointerPropertyRNA rna_TrackToConstraint_target;
StringPropertyRNA rna_TrackToConstraint_subtarget;
EnumPropertyRNA rna_TrackToConstraint_track_axis;
EnumPropertyRNA rna_TrackToConstraint_up_axis;
BoolPropertyRNA rna_TrackToConstraint_use_target_z;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_KinematicConstraint_target;
StringPropertyRNA rna_KinematicConstraint_subtarget;
IntPropertyRNA rna_KinematicConstraint_iterations;
PointerPropertyRNA rna_KinematicConstraint_pole_target;
StringPropertyRNA rna_KinematicConstraint_pole_subtarget;
FloatPropertyRNA rna_KinematicConstraint_pole_angle;
FloatPropertyRNA rna_KinematicConstraint_weight;
FloatPropertyRNA rna_KinematicConstraint_orient_weight;
IntPropertyRNA rna_KinematicConstraint_chain_count;
BoolPropertyRNA rna_KinematicConstraint_use_tail;
EnumPropertyRNA rna_KinematicConstraint_reference_axis;
BoolPropertyRNA rna_KinematicConstraint_use_location;
BoolPropertyRNA rna_KinematicConstraint_lock_location_x;
BoolPropertyRNA rna_KinematicConstraint_lock_location_y;
BoolPropertyRNA rna_KinematicConstraint_lock_location_z;
BoolPropertyRNA rna_KinematicConstraint_use_rotation;
BoolPropertyRNA rna_KinematicConstraint_lock_rotation_x;
BoolPropertyRNA rna_KinematicConstraint_lock_rotation_y;
BoolPropertyRNA rna_KinematicConstraint_lock_rotation_z;
BoolPropertyRNA rna_KinematicConstraint_use_stretch;
EnumPropertyRNA rna_KinematicConstraint_ik_type;
EnumPropertyRNA rna_KinematicConstraint_limit_mode;
FloatPropertyRNA rna_KinematicConstraint_distance;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_RigidBodyJointConstraint_target;
PointerPropertyRNA rna_RigidBodyJointConstraint_child;
EnumPropertyRNA rna_RigidBodyJointConstraint_pivot_type;
FloatPropertyRNA rna_RigidBodyJointConstraint_pivot_x;
FloatPropertyRNA rna_RigidBodyJointConstraint_pivot_y;
FloatPropertyRNA rna_RigidBodyJointConstraint_pivot_z;
FloatPropertyRNA rna_RigidBodyJointConstraint_axis_x;
FloatPropertyRNA rna_RigidBodyJointConstraint_axis_y;
FloatPropertyRNA rna_RigidBodyJointConstraint_axis_z;
BoolPropertyRNA rna_RigidBodyJointConstraint_use_linked_collision;
BoolPropertyRNA rna_RigidBodyJointConstraint_show_pivot;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_min_x;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_min_y;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_min_z;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_max_x;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_max_y;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_max_z;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_min_x;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_min_y;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_min_z;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_max_x;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_max_y;
FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_max_z;
BoolPropertyRNA rna_RigidBodyJointConstraint_use_limit_x;
BoolPropertyRNA rna_RigidBodyJointConstraint_use_limit_y;
BoolPropertyRNA rna_RigidBodyJointConstraint_use_limit_z;
BoolPropertyRNA rna_RigidBodyJointConstraint_use_angular_limit_x;
BoolPropertyRNA rna_RigidBodyJointConstraint_use_angular_limit_y;
BoolPropertyRNA rna_RigidBodyJointConstraint_use_angular_limit_z;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_ClampToConstraint_target;
EnumPropertyRNA rna_ClampToConstraint_main_axis;
BoolPropertyRNA rna_ClampToConstraint_use_cyclic;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

FloatPropertyRNA rna_LimitDistanceConstraint_head_tail;
PointerPropertyRNA rna_LimitDistanceConstraint_target;
StringPropertyRNA rna_LimitDistanceConstraint_subtarget;
FloatPropertyRNA rna_LimitDistanceConstraint_distance;
EnumPropertyRNA rna_LimitDistanceConstraint_limit_mode;
BoolPropertyRNA rna_LimitDistanceConstraint_use_transform_limit;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

BoolPropertyRNA rna_LimitScaleConstraint_use_min_x;
BoolPropertyRNA rna_LimitScaleConstraint_use_min_y;
BoolPropertyRNA rna_LimitScaleConstraint_use_min_z;
BoolPropertyRNA rna_LimitScaleConstraint_use_max_x;
BoolPropertyRNA rna_LimitScaleConstraint_use_max_y;
BoolPropertyRNA rna_LimitScaleConstraint_use_max_z;
FloatPropertyRNA rna_LimitScaleConstraint_min_x;
FloatPropertyRNA rna_LimitScaleConstraint_min_y;
FloatPropertyRNA rna_LimitScaleConstraint_min_z;
FloatPropertyRNA rna_LimitScaleConstraint_max_x;
FloatPropertyRNA rna_LimitScaleConstraint_max_y;
FloatPropertyRNA rna_LimitScaleConstraint_max_z;
BoolPropertyRNA rna_LimitScaleConstraint_use_transform_limit;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

BoolPropertyRNA rna_LimitRotationConstraint_use_limit_x;
BoolPropertyRNA rna_LimitRotationConstraint_use_limit_y;
BoolPropertyRNA rna_LimitRotationConstraint_use_limit_z;
FloatPropertyRNA rna_LimitRotationConstraint_min_x;
FloatPropertyRNA rna_LimitRotationConstraint_min_y;
FloatPropertyRNA rna_LimitRotationConstraint_min_z;
FloatPropertyRNA rna_LimitRotationConstraint_max_x;
FloatPropertyRNA rna_LimitRotationConstraint_max_y;
FloatPropertyRNA rna_LimitRotationConstraint_max_z;
BoolPropertyRNA rna_LimitRotationConstraint_use_transform_limit;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

BoolPropertyRNA rna_LimitLocationConstraint_use_min_x;
BoolPropertyRNA rna_LimitLocationConstraint_use_min_y;
BoolPropertyRNA rna_LimitLocationConstraint_use_min_z;
BoolPropertyRNA rna_LimitLocationConstraint_use_max_x;
BoolPropertyRNA rna_LimitLocationConstraint_use_max_y;
BoolPropertyRNA rna_LimitLocationConstraint_use_max_z;
FloatPropertyRNA rna_LimitLocationConstraint_min_x;
FloatPropertyRNA rna_LimitLocationConstraint_min_y;
FloatPropertyRNA rna_LimitLocationConstraint_min_z;
FloatPropertyRNA rna_LimitLocationConstraint_max_x;
FloatPropertyRNA rna_LimitLocationConstraint_max_y;
FloatPropertyRNA rna_LimitLocationConstraint_max_z;
BoolPropertyRNA rna_LimitLocationConstraint_use_transform_limit;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_TransformConstraint_target;
StringPropertyRNA rna_TransformConstraint_subtarget;
EnumPropertyRNA rna_TransformConstraint_map_from;
EnumPropertyRNA rna_TransformConstraint_map_to;
EnumPropertyRNA rna_TransformConstraint_map_to_x_from;
EnumPropertyRNA rna_TransformConstraint_map_to_y_from;
EnumPropertyRNA rna_TransformConstraint_map_to_z_from;
BoolPropertyRNA rna_TransformConstraint_use_motion_extrapolate;
FloatPropertyRNA rna_TransformConstraint_from_min_x;
FloatPropertyRNA rna_TransformConstraint_from_min_y;
FloatPropertyRNA rna_TransformConstraint_from_min_z;
FloatPropertyRNA rna_TransformConstraint_from_max_x;
FloatPropertyRNA rna_TransformConstraint_from_max_y;
FloatPropertyRNA rna_TransformConstraint_from_max_z;
FloatPropertyRNA rna_TransformConstraint_to_min_x;
FloatPropertyRNA rna_TransformConstraint_to_min_y;
FloatPropertyRNA rna_TransformConstraint_to_min_z;
FloatPropertyRNA rna_TransformConstraint_to_max_x;
FloatPropertyRNA rna_TransformConstraint_to_max_y;
FloatPropertyRNA rna_TransformConstraint_to_max_z;
FloatPropertyRNA rna_TransformConstraint_from_min_x_rot;
FloatPropertyRNA rna_TransformConstraint_from_min_y_rot;
FloatPropertyRNA rna_TransformConstraint_from_min_z_rot;
FloatPropertyRNA rna_TransformConstraint_from_max_x_rot;
FloatPropertyRNA rna_TransformConstraint_from_max_y_rot;
FloatPropertyRNA rna_TransformConstraint_from_max_z_rot;
FloatPropertyRNA rna_TransformConstraint_to_min_x_rot;
FloatPropertyRNA rna_TransformConstraint_to_min_y_rot;
FloatPropertyRNA rna_TransformConstraint_to_min_z_rot;
FloatPropertyRNA rna_TransformConstraint_to_max_x_rot;
FloatPropertyRNA rna_TransformConstraint_to_max_y_rot;
FloatPropertyRNA rna_TransformConstraint_to_max_z_rot;
FloatPropertyRNA rna_TransformConstraint_from_min_x_scale;
FloatPropertyRNA rna_TransformConstraint_from_min_y_scale;
FloatPropertyRNA rna_TransformConstraint_from_min_z_scale;
FloatPropertyRNA rna_TransformConstraint_from_max_x_scale;
FloatPropertyRNA rna_TransformConstraint_from_max_y_scale;
FloatPropertyRNA rna_TransformConstraint_from_max_z_scale;
FloatPropertyRNA rna_TransformConstraint_to_min_x_scale;
FloatPropertyRNA rna_TransformConstraint_to_min_y_scale;
FloatPropertyRNA rna_TransformConstraint_to_min_z_scale;
FloatPropertyRNA rna_TransformConstraint_to_max_x_scale;
FloatPropertyRNA rna_TransformConstraint_to_max_y_scale;
FloatPropertyRNA rna_TransformConstraint_to_max_z_scale;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_ShrinkwrapConstraint_target;
EnumPropertyRNA rna_ShrinkwrapConstraint_shrinkwrap_type;
FloatPropertyRNA rna_ShrinkwrapConstraint_distance;
EnumPropertyRNA rna_ShrinkwrapConstraint_project_axis;
EnumPropertyRNA rna_ShrinkwrapConstraint_project_axis_space;
FloatPropertyRNA rna_ShrinkwrapConstraint_project_limit;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

FloatPropertyRNA rna_DampedTrackConstraint_head_tail;
PointerPropertyRNA rna_DampedTrackConstraint_target;
StringPropertyRNA rna_DampedTrackConstraint_subtarget;
EnumPropertyRNA rna_DampedTrackConstraint_track_axis;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_SplineIKConstraint_target;
IntPropertyRNA rna_SplineIKConstraint_chain_count;
FloatPropertyRNA rna_SplineIKConstraint_joint_bindings;
BoolPropertyRNA rna_SplineIKConstraint_use_chain_offset;
BoolPropertyRNA rna_SplineIKConstraint_use_even_divisions;
BoolPropertyRNA rna_SplineIKConstraint_use_y_stretch;
BoolPropertyRNA rna_SplineIKConstraint_use_curve_radius;
EnumPropertyRNA rna_SplineIKConstraint_xz_scale_mode;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

FloatPropertyRNA rna_PivotConstraint_head_tail;
PointerPropertyRNA rna_PivotConstraint_target;
StringPropertyRNA rna_PivotConstraint_subtarget;
BoolPropertyRNA rna_PivotConstraint_use_relative_location;
FloatPropertyRNA rna_PivotConstraint_offset;
EnumPropertyRNA rna_PivotConstraint_rotation_range;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_FollowTrackConstraint_clip;
StringPropertyRNA rna_FollowTrackConstraint_track;
BoolPropertyRNA rna_FollowTrackConstraint_use_active_clip;
BoolPropertyRNA rna_FollowTrackConstraint_use_3d_position;
StringPropertyRNA rna_FollowTrackConstraint_object;
PointerPropertyRNA rna_FollowTrackConstraint_camera;
PointerPropertyRNA rna_FollowTrackConstraint_depth_object;
EnumPropertyRNA rna_FollowTrackConstraint_frame_method;
BoolPropertyRNA rna_FollowTrackConstraint_use_undistorted_position;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_CameraSolverConstraint_clip;
BoolPropertyRNA rna_CameraSolverConstraint_use_active_clip;


extern CollectionPropertyRNA rna_Constraint_rna_properties;
extern PointerPropertyRNA rna_Constraint_rna_type;
extern StringPropertyRNA rna_Constraint_name;
extern EnumPropertyRNA rna_Constraint_type;
extern EnumPropertyRNA rna_Constraint_owner_space;
extern EnumPropertyRNA rna_Constraint_target_space;
extern BoolPropertyRNA rna_Constraint_mute;
extern BoolPropertyRNA rna_Constraint_show_expanded;
extern BoolPropertyRNA rna_Constraint_is_valid;
extern BoolPropertyRNA rna_Constraint_active;
extern BoolPropertyRNA rna_Constraint_is_proxy_local;
extern FloatPropertyRNA rna_Constraint_influence;
extern FloatPropertyRNA rna_Constraint_error_location;
extern FloatPropertyRNA rna_Constraint_error_rotation;

PointerPropertyRNA rna_ObjectSolverConstraint_clip;
BoolPropertyRNA rna_ObjectSolverConstraint_use_active_clip;
StringPropertyRNA rna_ObjectSolverConstraint_object;
PointerPropertyRNA rna_ObjectSolverConstraint_camera;

static PointerRNA Constraint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Constraint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Constraint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Constraint_rna_properties_get(iter);
}

void Constraint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Constraint_rna_properties_get(iter);
}

void Constraint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Constraint_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Constraint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Constraint_name_get(PointerRNA *ptr, char *value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 64);
}

int Constraint_name_length(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return strlen(data->name);
}

void Constraint_name_set(PointerRNA *ptr, const char *value)
{
	rna_Constraint_name_set(ptr, value);
}

int Constraint_type_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (int)(data->type);
}

int Constraint_owner_space_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (int)(data->ownspace);
}

void Constraint_owner_space_set(PointerRNA *ptr, int value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->ownspace = value;
}

int Constraint_target_space_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (int)(data->tarspace);
}

void Constraint_target_space_set(PointerRNA *ptr, int value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->tarspace = value;
}

int Constraint_mute_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void Constraint_mute_set(PointerRNA *ptr, int value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	if (value) data->flag |= 512;
	else data->flag &= ~512;
}

int Constraint_show_expanded_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Constraint_show_expanded_set(PointerRNA *ptr, int value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int Constraint_is_valid_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return !(((data->flag) & 4) != 0);
}

int Constraint_active_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void Constraint_active_set(PointerRNA *ptr, int value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int Constraint_is_proxy_local_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void Constraint_is_proxy_local_set(PointerRNA *ptr, int value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

float Constraint_influence_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->enforce);
}

void Constraint_influence_set(PointerRNA *ptr, float value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->enforce = CLAMPIS(value, 0.0f, 1.0f);
}

float Constraint_error_location_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->lin_error);
}

float Constraint_error_rotation_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->rot_error);
}

static PointerRNA ConstraintTarget_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ConstraintTarget_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ConstraintTarget_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ConstraintTarget_rna_properties_get(iter);
}

void ConstraintTarget_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ConstraintTarget_rna_properties_get(iter);
}

void ConstraintTarget_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ConstraintTarget_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ConstraintTarget_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ConstraintTarget_target_get(PointerRNA *ptr)
{
	bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void ConstraintTarget_target_set(PointerRNA *ptr, PointerRNA value)
{
	bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void ConstraintTarget_subtarget_get(PointerRNA *ptr, char *value)
{
	bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int ConstraintTarget_subtarget_length(PointerRNA *ptr)
{
	bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
	return strlen(data->subtarget);
}

void ConstraintTarget_subtarget_set(PointerRNA *ptr, const char *value)
{
	bConstraintTarget *data = (bConstraintTarget *)(ptr->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

PointerRNA ChildOfConstraint_target_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void ChildOfConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void ChildOfConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int ChildOfConstraint_subtarget_length(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void ChildOfConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int ChildOfConstraint_use_location_x_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void ChildOfConstraint_use_location_x_set(PointerRNA *ptr, int value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ChildOfConstraint_use_location_y_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void ChildOfConstraint_use_location_y_set(PointerRNA *ptr, int value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ChildOfConstraint_use_location_z_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void ChildOfConstraint_use_location_z_set(PointerRNA *ptr, int value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int ChildOfConstraint_use_rotation_x_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void ChildOfConstraint_use_rotation_x_set(PointerRNA *ptr, int value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int ChildOfConstraint_use_rotation_y_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void ChildOfConstraint_use_rotation_y_set(PointerRNA *ptr, int value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int ChildOfConstraint_use_rotation_z_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void ChildOfConstraint_use_rotation_z_set(PointerRNA *ptr, int value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int ChildOfConstraint_use_scale_x_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 64) != 0);
}

void ChildOfConstraint_use_scale_x_set(PointerRNA *ptr, int value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int ChildOfConstraint_use_scale_y_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 128) != 0);
}

void ChildOfConstraint_use_scale_y_set(PointerRNA *ptr, int value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int ChildOfConstraint_use_scale_z_get(PointerRNA *ptr)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 256) != 0);
}

void ChildOfConstraint_use_scale_z_set(PointerRNA *ptr, int value)
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 256;
	else data->flag &= ~256;
}

void ChildOfConstraint_inverse_matrix_get(PointerRNA *ptr, float values[16])
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 16; i++) {
		values[i] = (float)(((float *)data->invmat)[i]);
	}
}

void ChildOfConstraint_inverse_matrix_set(PointerRNA *ptr, const float values[16])
{
	bChildOfConstraint *data = (bChildOfConstraint *)(((bConstraint *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 16; i++) {
		((float *)data->invmat)[i] = values[i];
	}
}

static PointerRNA PythonConstraint_targets_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ConstraintTarget, rna_iterator_listbase_get(iter));
}

void PythonConstraint_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bPythonConstraint *data = (bPythonConstraint *)(((bConstraint *)ptr->data)->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_PythonConstraint_targets;

	rna_iterator_listbase_begin(iter, &data->targets, NULL);

	if (iter->valid)
		iter->ptr = PythonConstraint_targets_get(iter);
}

void PythonConstraint_targets_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = PythonConstraint_targets_get(iter);
}

void PythonConstraint_targets_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int PythonConstraint_targets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	PythonConstraint_targets_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = PythonConstraint_targets_get(&iter);
	}

	PythonConstraint_targets_end(&iter);

	return found;
}

int PythonConstraint_target_count_get(PointerRNA *ptr)
{
	bPythonConstraint *data = (bPythonConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->tarnum);
}

void PythonConstraint_target_count_set(PointerRNA *ptr, int value)
{
	bPythonConstraint *data = (bPythonConstraint *)(((bConstraint *)ptr->data)->data);
	data->tarnum = value;
}

PointerRNA PythonConstraint_text_get(PointerRNA *ptr)
{
	bPythonConstraint *data = (bPythonConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Text, data->text);
}

void PythonConstraint_text_set(PointerRNA *ptr, PointerRNA value)
{
	bPythonConstraint *data = (bPythonConstraint *)(((bConstraint *)ptr->data)->data);

	if (data->text)
		id_us_min((ID *)data->text);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->text = value.data;
}

int PythonConstraint_use_targets_get(PointerRNA *ptr)
{
	bPythonConstraint *data = (bPythonConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void PythonConstraint_use_targets_set(PointerRNA *ptr, int value)
{
	bPythonConstraint *data = (bPythonConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int PythonConstraint_has_script_error_get(PointerRNA *ptr)
{
	bPythonConstraint *data = (bPythonConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

float StretchToConstraint_head_tail_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->headtail);
}

void StretchToConstraint_head_tail_set(PointerRNA *ptr, float value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->headtail = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA StretchToConstraint_target_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void StretchToConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void StretchToConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int StretchToConstraint_subtarget_length(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void StretchToConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int StretchToConstraint_volume_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->volmode);
}

void StretchToConstraint_volume_set(PointerRNA *ptr, int value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	data->volmode = value;
}

int StretchToConstraint_keep_axis_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->plane);
}

void StretchToConstraint_keep_axis_set(PointerRNA *ptr, int value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	data->plane = value;
}

float StretchToConstraint_rest_length_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->orglength);
}

void StretchToConstraint_rest_length_set(PointerRNA *ptr, float value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	data->orglength = CLAMPIS(value, 0.0f, 100.0f);
}

float StretchToConstraint_bulge_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->bulge);
}

void StretchToConstraint_bulge_set(PointerRNA *ptr, float value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	data->bulge = CLAMPIS(value, 0.0f, 100.0f);
}

int StretchToConstraint_use_bulge_min_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void StretchToConstraint_use_bulge_min_set(PointerRNA *ptr, int value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int StretchToConstraint_use_bulge_max_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void StretchToConstraint_use_bulge_max_set(PointerRNA *ptr, int value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

float StretchToConstraint_bulge_min_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->bulge_min);
}

void StretchToConstraint_bulge_min_set(PointerRNA *ptr, float value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	data->bulge_min = CLAMPIS(value, 0.0f, 1.0f);
}

float StretchToConstraint_bulge_max_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->bulge_max);
}

void StretchToConstraint_bulge_max_set(PointerRNA *ptr, float value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	data->bulge_max = CLAMPIS(value, 1.0f, 100.0f);
}

float StretchToConstraint_bulge_smooth_get(PointerRNA *ptr)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->bulge_smooth);
}

void StretchToConstraint_bulge_smooth_set(PointerRNA *ptr, float value)
{
	bStretchToConstraint *data = (bStretchToConstraint *)(((bConstraint *)ptr->data)->data);
	data->bulge_smooth = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA FollowPathConstraint_target_get(PointerRNA *ptr)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void FollowPathConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

float FollowPathConstraint_offset_get(PointerRNA *ptr)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->offset);
}

void FollowPathConstraint_offset_set(PointerRNA *ptr, float value)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	data->offset = CLAMPIS(value, -300000.0f, 300000.0f);
}

float FollowPathConstraint_offset_factor_get(PointerRNA *ptr)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->offset_fac);
}

void FollowPathConstraint_offset_factor_set(PointerRNA *ptr, float value)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	data->offset_fac = CLAMPIS(value, 0.0f, 1.0f);
}

int FollowPathConstraint_forward_axis_get(PointerRNA *ptr)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->trackflag);
}

void FollowPathConstraint_forward_axis_set(PointerRNA *ptr, int value)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	data->trackflag = value;
}

int FollowPathConstraint_up_axis_get(PointerRNA *ptr)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->upflag);
}

void FollowPathConstraint_up_axis_set(PointerRNA *ptr, int value)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	data->upflag = value;
}

int FollowPathConstraint_use_curve_follow_get(PointerRNA *ptr)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->followflag) & 1) != 0);
}

void FollowPathConstraint_use_curve_follow_set(PointerRNA *ptr, int value)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->followflag |= 1;
	else data->followflag &= ~1;
}

int FollowPathConstraint_use_fixed_location_get(PointerRNA *ptr)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->followflag) & 2) != 0);
}

void FollowPathConstraint_use_fixed_location_set(PointerRNA *ptr, int value)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->followflag |= 2;
	else data->followflag &= ~2;
}

int FollowPathConstraint_use_curve_radius_get(PointerRNA *ptr)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->followflag) & 4) != 0);
}

void FollowPathConstraint_use_curve_radius_set(PointerRNA *ptr, int value)
{
	bFollowPathConstraint *data = (bFollowPathConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->followflag |= 4;
	else data->followflag &= ~4;
}

float LockedTrackConstraint_head_tail_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->headtail);
}

void LockedTrackConstraint_head_tail_set(PointerRNA *ptr, float value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->headtail = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA LockedTrackConstraint_target_get(PointerRNA *ptr)
{
	bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void LockedTrackConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void LockedTrackConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int LockedTrackConstraint_subtarget_length(PointerRNA *ptr)
{
	bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void LockedTrackConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int LockedTrackConstraint_track_axis_get(PointerRNA *ptr)
{
	bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->trackflag);
}

void LockedTrackConstraint_track_axis_set(PointerRNA *ptr, int value)
{
	bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
	data->trackflag = value;
}

int LockedTrackConstraint_lock_axis_get(PointerRNA *ptr)
{
	bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->lockflag);
}

void LockedTrackConstraint_lock_axis_set(PointerRNA *ptr, int value)
{
	bLockTrackConstraint *data = (bLockTrackConstraint *)(((bConstraint *)ptr->data)->data);
	data->lockflag = value;
}

PointerRNA ActionConstraint_target_get(PointerRNA *ptr)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void ActionConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void ActionConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int ActionConstraint_subtarget_length(PointerRNA *ptr)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void ActionConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int ActionConstraint_transform_channel_get(PointerRNA *ptr)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->type);
}

void ActionConstraint_transform_channel_set(PointerRNA *ptr, int value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	data->type = value;
}

PointerRNA ActionConstraint_action_get(PointerRNA *ptr)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Action, data->act);
}

void ActionConstraint_action_set(PointerRNA *ptr, PointerRNA value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);

	if (data->act)
		id_us_min((ID *)data->act);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->act = value.data;
}

int ActionConstraint_use_bone_object_action_get(PointerRNA *ptr)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void ActionConstraint_use_bone_object_action_set(PointerRNA *ptr, int value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int ActionConstraint_frame_start_get(PointerRNA *ptr)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->start);
}

void ActionConstraint_frame_start_set(PointerRNA *ptr, int value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	data->start = CLAMPIS(value, -300000, 300000);
}

int ActionConstraint_frame_end_get(PointerRNA *ptr)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->end);
}

void ActionConstraint_frame_end_set(PointerRNA *ptr, int value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	data->end = CLAMPIS(value, -300000, 300000);
}

float ActionConstraint_max_get(PointerRNA *ptr)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->max);
}

void ActionConstraint_max_set(PointerRNA *ptr, float value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_ActionConstraint_minmax_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->max = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

float ActionConstraint_min_get(PointerRNA *ptr)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->min);
}

void ActionConstraint_min_set(PointerRNA *ptr, float value)
{
	bActionConstraint *data = (bActionConstraint *)(((bConstraint *)ptr->data)->data);
	float prop_clamp_min = -FLT_MAX, prop_clamp_max = FLT_MAX, prop_soft_min, prop_soft_max;
	rna_ActionConstraint_minmax_range(ptr, &prop_clamp_min, &prop_clamp_max, &prop_soft_min, &prop_soft_max);
	data->min = CLAMPIS(value, prop_clamp_min, prop_clamp_max);}

PointerRNA CopyScaleConstraint_target_get(PointerRNA *ptr)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void CopyScaleConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void CopyScaleConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int CopyScaleConstraint_subtarget_length(PointerRNA *ptr)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void CopyScaleConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int CopyScaleConstraint_use_x_get(PointerRNA *ptr)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void CopyScaleConstraint_use_x_set(PointerRNA *ptr, int value)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int CopyScaleConstraint_use_y_get(PointerRNA *ptr)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void CopyScaleConstraint_use_y_set(PointerRNA *ptr, int value)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int CopyScaleConstraint_use_z_get(PointerRNA *ptr)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void CopyScaleConstraint_use_z_set(PointerRNA *ptr, int value)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int CopyScaleConstraint_use_offset_get(PointerRNA *ptr)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void CopyScaleConstraint_use_offset_set(PointerRNA *ptr, int value)
{
	bSizeLikeConstraint *data = (bSizeLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int MaintainVolumeConstraint_free_axis_get(PointerRNA *ptr)
{
	bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->flag);
}

void MaintainVolumeConstraint_free_axis_set(PointerRNA *ptr, int value)
{
	bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
	data->flag = value;
}

float MaintainVolumeConstraint_volume_get(PointerRNA *ptr)
{
	bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->volume);
}

void MaintainVolumeConstraint_volume_set(PointerRNA *ptr, float value)
{
	bSameVolumeConstraint *data = (bSameVolumeConstraint *)(((bConstraint *)ptr->data)->data);
	data->volume = CLAMPIS(value, 0.0010000000f, 100.0f);
}

float CopyLocationConstraint_head_tail_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->headtail);
}

void CopyLocationConstraint_head_tail_set(PointerRNA *ptr, float value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->headtail = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA CopyLocationConstraint_target_get(PointerRNA *ptr)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void CopyLocationConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void CopyLocationConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int CopyLocationConstraint_subtarget_length(PointerRNA *ptr)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void CopyLocationConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int CopyLocationConstraint_use_x_get(PointerRNA *ptr)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void CopyLocationConstraint_use_x_set(PointerRNA *ptr, int value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int CopyLocationConstraint_use_y_get(PointerRNA *ptr)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void CopyLocationConstraint_use_y_set(PointerRNA *ptr, int value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int CopyLocationConstraint_use_z_get(PointerRNA *ptr)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void CopyLocationConstraint_use_z_set(PointerRNA *ptr, int value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int CopyLocationConstraint_invert_x_get(PointerRNA *ptr)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void CopyLocationConstraint_invert_x_set(PointerRNA *ptr, int value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int CopyLocationConstraint_invert_y_get(PointerRNA *ptr)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void CopyLocationConstraint_invert_y_set(PointerRNA *ptr, int value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int CopyLocationConstraint_invert_z_get(PointerRNA *ptr)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 64) != 0);
}

void CopyLocationConstraint_invert_z_set(PointerRNA *ptr, int value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int CopyLocationConstraint_use_offset_get(PointerRNA *ptr)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 128) != 0);
}

void CopyLocationConstraint_use_offset_set(PointerRNA *ptr, int value)
{
	bLocateLikeConstraint *data = (bLocateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

PointerRNA CopyRotationConstraint_target_get(PointerRNA *ptr)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void CopyRotationConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void CopyRotationConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int CopyRotationConstraint_subtarget_length(PointerRNA *ptr)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void CopyRotationConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int CopyRotationConstraint_use_x_get(PointerRNA *ptr)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void CopyRotationConstraint_use_x_set(PointerRNA *ptr, int value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int CopyRotationConstraint_use_y_get(PointerRNA *ptr)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void CopyRotationConstraint_use_y_set(PointerRNA *ptr, int value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int CopyRotationConstraint_use_z_get(PointerRNA *ptr)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void CopyRotationConstraint_use_z_set(PointerRNA *ptr, int value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int CopyRotationConstraint_invert_x_get(PointerRNA *ptr)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void CopyRotationConstraint_invert_x_set(PointerRNA *ptr, int value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int CopyRotationConstraint_invert_y_get(PointerRNA *ptr)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void CopyRotationConstraint_invert_y_set(PointerRNA *ptr, int value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int CopyRotationConstraint_invert_z_get(PointerRNA *ptr)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 64) != 0);
}

void CopyRotationConstraint_invert_z_set(PointerRNA *ptr, int value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

int CopyRotationConstraint_use_offset_get(PointerRNA *ptr)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 128) != 0);
}

void CopyRotationConstraint_use_offset_set(PointerRNA *ptr, int value)
{
	bRotateLikeConstraint *data = (bRotateLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

float CopyTransformsConstraint_head_tail_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->headtail);
}

void CopyTransformsConstraint_head_tail_set(PointerRNA *ptr, float value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->headtail = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA CopyTransformsConstraint_target_get(PointerRNA *ptr)
{
	bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void CopyTransformsConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void CopyTransformsConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int CopyTransformsConstraint_subtarget_length(PointerRNA *ptr)
{
	bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void CopyTransformsConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bTransLikeConstraint *data = (bTransLikeConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

PointerRNA FloorConstraint_target_get(PointerRNA *ptr)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void FloorConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void FloorConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int FloorConstraint_subtarget_length(PointerRNA *ptr)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void FloorConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int FloorConstraint_floor_location_get(PointerRNA *ptr)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->minmaxflag);
}

void FloorConstraint_floor_location_set(PointerRNA *ptr, int value)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	data->minmaxflag = value;
}

int FloorConstraint_use_sticky_get(PointerRNA *ptr)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void FloorConstraint_use_sticky_set(PointerRNA *ptr, int value)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int FloorConstraint_use_rotation_get(PointerRNA *ptr)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void FloorConstraint_use_rotation_set(PointerRNA *ptr, int value)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

float FloorConstraint_offset_get(PointerRNA *ptr)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->offset);
}

void FloorConstraint_offset_set(PointerRNA *ptr, float value)
{
	bMinMaxConstraint *data = (bMinMaxConstraint *)(((bConstraint *)ptr->data)->data);
	data->offset = CLAMPIS(value, -1000.0f, 1000.0f);
}

float TrackToConstraint_head_tail_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->headtail);
}

void TrackToConstraint_head_tail_set(PointerRNA *ptr, float value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->headtail = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA TrackToConstraint_target_get(PointerRNA *ptr)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void TrackToConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void TrackToConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int TrackToConstraint_subtarget_length(PointerRNA *ptr)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void TrackToConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int TrackToConstraint_track_axis_get(PointerRNA *ptr)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->reserved1);
}

void TrackToConstraint_track_axis_set(PointerRNA *ptr, int value)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	data->reserved1 = value;
}

int TrackToConstraint_up_axis_get(PointerRNA *ptr)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->reserved2);
}

void TrackToConstraint_up_axis_set(PointerRNA *ptr, int value)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	data->reserved2 = value;
}

int TrackToConstraint_use_target_z_get(PointerRNA *ptr)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flags) & 1) != 0);
}

void TrackToConstraint_use_target_z_set(PointerRNA *ptr, int value)
{
	bTrackToConstraint *data = (bTrackToConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flags |= 1;
	else data->flags &= ~1;
}

PointerRNA KinematicConstraint_target_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void KinematicConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void KinematicConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int KinematicConstraint_subtarget_length(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void KinematicConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int KinematicConstraint_iterations_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->iterations);
}

void KinematicConstraint_iterations_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	data->iterations = CLAMPIS(value, 0, 10000);
}

PointerRNA KinematicConstraint_pole_target_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->poletar);
}

void KinematicConstraint_pole_target_set(PointerRNA *ptr, PointerRNA value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->poletar = value.data;
}

void KinematicConstraint_pole_subtarget_get(PointerRNA *ptr, char *value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->polesubtarget, 64);
}

int KinematicConstraint_pole_subtarget_length(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->polesubtarget);
}

void KinematicConstraint_pole_subtarget_set(PointerRNA *ptr, const char *value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->polesubtarget, value, 64);
}

float KinematicConstraint_pole_angle_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->poleangle);
}

void KinematicConstraint_pole_angle_set(PointerRNA *ptr, float value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	data->poleangle = CLAMPIS(value, -3.1415927410f, 3.1415927410f);
}

float KinematicConstraint_weight_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->weight);
}

void KinematicConstraint_weight_set(PointerRNA *ptr, float value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	data->weight = CLAMPIS(value, 0.0099999998f, 1.0f);
}

float KinematicConstraint_orient_weight_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->orientweight);
}

void KinematicConstraint_orient_weight_set(PointerRNA *ptr, float value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	data->orientweight = CLAMPIS(value, 0.0099999998f, 1.0f);
}

int KinematicConstraint_chain_count_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->rootbone);
}

void KinematicConstraint_chain_count_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	data->rootbone = CLAMPIS(value, 0, 255);
}

int KinematicConstraint_use_tail_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void KinematicConstraint_use_tail_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int KinematicConstraint_reference_axis_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return ((data->flag) & 16384);
}

void KinematicConstraint_reference_axis_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	data->flag &= ~16384;
	data->flag |= value;
}

int KinematicConstraint_use_location_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void KinematicConstraint_use_location_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

int KinematicConstraint_lock_location_x_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return !(((data->flag) & 256) != 0);
}

void KinematicConstraint_lock_location_x_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (!value) data->flag |= 256;
	else data->flag &= ~256;
}

int KinematicConstraint_lock_location_y_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return !(((data->flag) & 512) != 0);
}

void KinematicConstraint_lock_location_y_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (!value) data->flag |= 512;
	else data->flag &= ~512;
}

int KinematicConstraint_lock_location_z_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return !(((data->flag) & 1024) != 0);
}

void KinematicConstraint_lock_location_z_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (!value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int KinematicConstraint_use_rotation_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void KinematicConstraint_use_rotation_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int KinematicConstraint_lock_rotation_x_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return !(((data->flag) & 2048) != 0);
}

void KinematicConstraint_lock_rotation_x_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (!value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int KinematicConstraint_lock_rotation_y_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return !(((data->flag) & 4096) != 0);
}

void KinematicConstraint_lock_rotation_y_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (!value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int KinematicConstraint_lock_rotation_z_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return !(((data->flag) & 8192) != 0);
}

void KinematicConstraint_lock_rotation_z_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (!value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int KinematicConstraint_use_stretch_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void KinematicConstraint_use_stretch_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int KinematicConstraint_ik_type_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->type);
}

void KinematicConstraint_ik_type_set(PointerRNA *ptr, int value)
{
	rna_Constraint_ik_type_set(ptr, value);
}

int KinematicConstraint_limit_mode_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->mode);
}

void KinematicConstraint_limit_mode_set(PointerRNA *ptr, int value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	data->mode = value;
}

float KinematicConstraint_distance_get(PointerRNA *ptr)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->dist);
}

void KinematicConstraint_distance_set(PointerRNA *ptr, float value)
{
	bKinematicConstraint *data = (bKinematicConstraint *)(((bConstraint *)ptr->data)->data);
	data->dist = CLAMPIS(value, 0.0f, 100.0f);
}

PointerRNA RigidBodyJointConstraint_target_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void RigidBodyJointConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

PointerRNA RigidBodyJointConstraint_child_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->child);
}

void RigidBodyJointConstraint_child_set(PointerRNA *ptr, PointerRNA value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->child = value.data;
}

int RigidBodyJointConstraint_pivot_type_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->type);
}

void RigidBodyJointConstraint_pivot_type_set(PointerRNA *ptr, int value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->type = value;
}

float RigidBodyJointConstraint_pivot_x_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->pivX);
}

void RigidBodyJointConstraint_pivot_x_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->pivX = CLAMPIS(value, -1000.0f, 1000.0f);
}

float RigidBodyJointConstraint_pivot_y_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->pivY);
}

void RigidBodyJointConstraint_pivot_y_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->pivY = CLAMPIS(value, -1000.0f, 1000.0f);
}

float RigidBodyJointConstraint_pivot_z_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->pivZ);
}

void RigidBodyJointConstraint_pivot_z_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->pivZ = CLAMPIS(value, -1000.0f, 1000.0f);
}

float RigidBodyJointConstraint_axis_x_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->axX);
}

void RigidBodyJointConstraint_axis_x_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->axX = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyJointConstraint_axis_y_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->axY);
}

void RigidBodyJointConstraint_axis_y_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->axY = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyJointConstraint_axis_z_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->axZ);
}

void RigidBodyJointConstraint_axis_z_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->axZ = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

int RigidBodyJointConstraint_use_linked_collision_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 128) != 0);
}

void RigidBodyJointConstraint_use_linked_collision_set(PointerRNA *ptr, int value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 128;
	else data->flag &= ~128;
}

int RigidBodyJointConstraint_show_pivot_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 64) != 0);
}

void RigidBodyJointConstraint_show_pivot_set(PointerRNA *ptr, int value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 64;
	else data->flag &= ~64;
}

float RigidBodyJointConstraint_limit_min_x_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->minLimit[0]);
}

void RigidBodyJointConstraint_limit_min_x_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->minLimit[0] = value;
}

float RigidBodyJointConstraint_limit_min_y_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->minLimit[1]);
}

void RigidBodyJointConstraint_limit_min_y_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->minLimit[1] = value;
}

float RigidBodyJointConstraint_limit_min_z_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->minLimit[2]);
}

void RigidBodyJointConstraint_limit_min_z_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->minLimit[2] = value;
}

float RigidBodyJointConstraint_limit_max_x_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->maxLimit[0]);
}

void RigidBodyJointConstraint_limit_max_x_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->maxLimit[0] = value;
}

float RigidBodyJointConstraint_limit_max_y_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->maxLimit[1]);
}

void RigidBodyJointConstraint_limit_max_y_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->maxLimit[1] = value;
}

float RigidBodyJointConstraint_limit_max_z_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->maxLimit[2]);
}

void RigidBodyJointConstraint_limit_max_z_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->maxLimit[2] = value;
}

float RigidBodyJointConstraint_limit_angle_min_x_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->minLimit[3]);
}

void RigidBodyJointConstraint_limit_angle_min_x_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->minLimit[3] = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyJointConstraint_limit_angle_min_y_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->minLimit[4]);
}

void RigidBodyJointConstraint_limit_angle_min_y_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->minLimit[4] = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyJointConstraint_limit_angle_min_z_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->minLimit[5]);
}

void RigidBodyJointConstraint_limit_angle_min_z_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->minLimit[5] = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyJointConstraint_limit_angle_max_x_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->maxLimit[3]);
}

void RigidBodyJointConstraint_limit_angle_max_x_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->maxLimit[3] = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyJointConstraint_limit_angle_max_y_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->maxLimit[4]);
}

void RigidBodyJointConstraint_limit_angle_max_y_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->maxLimit[4] = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

float RigidBodyJointConstraint_limit_angle_max_z_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->maxLimit[5]);
}

void RigidBodyJointConstraint_limit_angle_max_z_set(PointerRNA *ptr, float value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	data->maxLimit[5] = CLAMPIS(value, -6.2831854820f, 6.2831854820f);
}

int RigidBodyJointConstraint_use_limit_x_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void RigidBodyJointConstraint_use_limit_x_set(PointerRNA *ptr, int value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int RigidBodyJointConstraint_use_limit_y_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void RigidBodyJointConstraint_use_limit_y_set(PointerRNA *ptr, int value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int RigidBodyJointConstraint_use_limit_z_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void RigidBodyJointConstraint_use_limit_z_set(PointerRNA *ptr, int value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int RigidBodyJointConstraint_use_angular_limit_x_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void RigidBodyJointConstraint_use_angular_limit_x_set(PointerRNA *ptr, int value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int RigidBodyJointConstraint_use_angular_limit_y_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void RigidBodyJointConstraint_use_angular_limit_y_set(PointerRNA *ptr, int value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int RigidBodyJointConstraint_use_angular_limit_z_get(PointerRNA *ptr)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void RigidBodyJointConstraint_use_angular_limit_z_set(PointerRNA *ptr, int value)
{
	bRigidBodyJointConstraint *data = (bRigidBodyJointConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

PointerRNA ClampToConstraint_target_get(PointerRNA *ptr)
{
	bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void ClampToConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

int ClampToConstraint_main_axis_get(PointerRNA *ptr)
{
	bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->flag);
}

void ClampToConstraint_main_axis_set(PointerRNA *ptr, int value)
{
	bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
	data->flag = value;
}

int ClampToConstraint_use_cyclic_get(PointerRNA *ptr)
{
	bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag2) & 1) != 0);
}

void ClampToConstraint_use_cyclic_set(PointerRNA *ptr, int value)
{
	bClampToConstraint *data = (bClampToConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag2 |= 1;
	else data->flag2 &= ~1;
}

float LimitDistanceConstraint_head_tail_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->headtail);
}

void LimitDistanceConstraint_head_tail_set(PointerRNA *ptr, float value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->headtail = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA LimitDistanceConstraint_target_get(PointerRNA *ptr)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void LimitDistanceConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void LimitDistanceConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int LimitDistanceConstraint_subtarget_length(PointerRNA *ptr)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void LimitDistanceConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

float LimitDistanceConstraint_distance_get(PointerRNA *ptr)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->dist);
}

void LimitDistanceConstraint_distance_set(PointerRNA *ptr, float value)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->dist = CLAMPIS(value, 0.0f, 100.0f);
}

int LimitDistanceConstraint_limit_mode_get(PointerRNA *ptr)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->mode);
}

void LimitDistanceConstraint_limit_mode_set(PointerRNA *ptr, int value)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->mode = value;
}

int LimitDistanceConstraint_use_transform_limit_get(PointerRNA *ptr)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void LimitDistanceConstraint_use_transform_limit_set(PointerRNA *ptr, int value)
{
	bDistLimitConstraint *data = (bDistLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int LimitScaleConstraint_use_min_x_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void LimitScaleConstraint_use_min_x_set(PointerRNA *ptr, int value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int LimitScaleConstraint_use_min_y_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void LimitScaleConstraint_use_min_y_set(PointerRNA *ptr, int value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int LimitScaleConstraint_use_min_z_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void LimitScaleConstraint_use_min_z_set(PointerRNA *ptr, int value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int LimitScaleConstraint_use_max_x_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void LimitScaleConstraint_use_max_x_set(PointerRNA *ptr, int value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int LimitScaleConstraint_use_max_y_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void LimitScaleConstraint_use_max_y_set(PointerRNA *ptr, int value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int LimitScaleConstraint_use_max_z_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void LimitScaleConstraint_use_max_z_set(PointerRNA *ptr, int value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

float LimitScaleConstraint_min_x_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->xmin);
}

void LimitScaleConstraint_min_x_set(PointerRNA *ptr, float value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->xmin = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_min_y_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->ymin);
}

void LimitScaleConstraint_min_y_set(PointerRNA *ptr, float value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->ymin = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_min_z_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->zmin);
}

void LimitScaleConstraint_min_z_set(PointerRNA *ptr, float value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->zmin = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_max_x_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->xmax);
}

void LimitScaleConstraint_max_x_set(PointerRNA *ptr, float value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->xmax = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_max_y_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->ymax);
}

void LimitScaleConstraint_max_y_set(PointerRNA *ptr, float value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->ymax = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitScaleConstraint_max_z_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->zmax);
}

void LimitScaleConstraint_max_z_set(PointerRNA *ptr, float value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->zmax = CLAMPIS(value, -1000.0f, 1000.0f);
}

int LimitScaleConstraint_use_transform_limit_get(PointerRNA *ptr)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag2) & 2) != 0);
}

void LimitScaleConstraint_use_transform_limit_set(PointerRNA *ptr, int value)
{
	bSizeLimitConstraint *data = (bSizeLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag2 |= 2;
	else data->flag2 &= ~2;
}

int LimitRotationConstraint_use_limit_x_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void LimitRotationConstraint_use_limit_x_set(PointerRNA *ptr, int value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int LimitRotationConstraint_use_limit_y_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void LimitRotationConstraint_use_limit_y_set(PointerRNA *ptr, int value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int LimitRotationConstraint_use_limit_z_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void LimitRotationConstraint_use_limit_z_set(PointerRNA *ptr, int value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

float LimitRotationConstraint_min_x_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->xmin);
}

void LimitRotationConstraint_min_x_set(PointerRNA *ptr, float value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->xmin = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_min_y_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->ymin);
}

void LimitRotationConstraint_min_y_set(PointerRNA *ptr, float value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->ymin = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_min_z_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->zmin);
}

void LimitRotationConstraint_min_z_set(PointerRNA *ptr, float value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->zmin = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_max_x_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->xmax);
}

void LimitRotationConstraint_max_x_set(PointerRNA *ptr, float value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->xmax = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_max_y_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->ymax);
}

void LimitRotationConstraint_max_y_set(PointerRNA *ptr, float value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->ymax = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitRotationConstraint_max_z_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->zmax);
}

void LimitRotationConstraint_max_z_set(PointerRNA *ptr, float value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->zmax = CLAMPIS(value, -1000.0f, 1000.0f);
}

int LimitRotationConstraint_use_transform_limit_get(PointerRNA *ptr)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag2) & 2) != 0);
}

void LimitRotationConstraint_use_transform_limit_set(PointerRNA *ptr, int value)
{
	bRotLimitConstraint *data = (bRotLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag2 |= 2;
	else data->flag2 &= ~2;
}

int LimitLocationConstraint_use_min_x_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void LimitLocationConstraint_use_min_x_set(PointerRNA *ptr, int value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int LimitLocationConstraint_use_min_y_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void LimitLocationConstraint_use_min_y_set(PointerRNA *ptr, int value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int LimitLocationConstraint_use_min_z_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 16) != 0);
}

void LimitLocationConstraint_use_min_z_set(PointerRNA *ptr, int value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int LimitLocationConstraint_use_max_x_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void LimitLocationConstraint_use_max_x_set(PointerRNA *ptr, int value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int LimitLocationConstraint_use_max_y_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void LimitLocationConstraint_use_max_y_set(PointerRNA *ptr, int value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int LimitLocationConstraint_use_max_z_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 32) != 0);
}

void LimitLocationConstraint_use_max_z_set(PointerRNA *ptr, int value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 32;
	else data->flag &= ~32;
}

float LimitLocationConstraint_min_x_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->xmin);
}

void LimitLocationConstraint_min_x_set(PointerRNA *ptr, float value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->xmin = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitLocationConstraint_min_y_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->ymin);
}

void LimitLocationConstraint_min_y_set(PointerRNA *ptr, float value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->ymin = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitLocationConstraint_min_z_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->zmin);
}

void LimitLocationConstraint_min_z_set(PointerRNA *ptr, float value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->zmin = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitLocationConstraint_max_x_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->xmax);
}

void LimitLocationConstraint_max_x_set(PointerRNA *ptr, float value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->xmax = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitLocationConstraint_max_y_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->ymax);
}

void LimitLocationConstraint_max_y_set(PointerRNA *ptr, float value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->ymax = CLAMPIS(value, -1000.0f, 1000.0f);
}

float LimitLocationConstraint_max_z_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->zmax);
}

void LimitLocationConstraint_max_z_set(PointerRNA *ptr, float value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	data->zmax = CLAMPIS(value, -1000.0f, 1000.0f);
}

int LimitLocationConstraint_use_transform_limit_get(PointerRNA *ptr)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag2) & 2) != 0);
}

void LimitLocationConstraint_use_transform_limit_set(PointerRNA *ptr, int value)
{
	bLocLimitConstraint *data = (bLocLimitConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag2 |= 2;
	else data->flag2 &= ~2;
}

PointerRNA TransformConstraint_target_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void TransformConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void TransformConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int TransformConstraint_subtarget_length(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void TransformConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int TransformConstraint_map_from_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->from);
}

void TransformConstraint_map_from_set(PointerRNA *ptr, int value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from = value;
}

int TransformConstraint_map_to_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->to);
}

void TransformConstraint_map_to_set(PointerRNA *ptr, int value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to = value;
}

int TransformConstraint_map_to_x_from_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->map[0]);
}

void TransformConstraint_map_to_x_from_set(PointerRNA *ptr, int value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->map[0] = value;
}

int TransformConstraint_map_to_y_from_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->map[1]);
}

void TransformConstraint_map_to_y_from_set(PointerRNA *ptr, int value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->map[1] = value;
}

int TransformConstraint_map_to_z_from_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->map[2]);
}

void TransformConstraint_map_to_z_from_set(PointerRNA *ptr, int value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->map[2] = value;
}

int TransformConstraint_use_motion_extrapolate_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->expo) & 1) != 0);
}

void TransformConstraint_use_motion_extrapolate_set(PointerRNA *ptr, int value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->expo |= 1;
	else data->expo &= ~1;
}

float TransformConstraint_from_min_x_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_min[0]);
}

void TransformConstraint_from_min_x_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_min[0] = value;
}

float TransformConstraint_from_min_y_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_min[1]);
}

void TransformConstraint_from_min_y_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_min[1] = value;
}

float TransformConstraint_from_min_z_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_min[2]);
}

void TransformConstraint_from_min_z_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_min[2] = value;
}

float TransformConstraint_from_max_x_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_max[0]);
}

void TransformConstraint_from_max_x_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_max[0] = value;
}

float TransformConstraint_from_max_y_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_max[1]);
}

void TransformConstraint_from_max_y_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_max[1] = value;
}

float TransformConstraint_from_max_z_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_max[2]);
}

void TransformConstraint_from_max_z_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_max[2] = value;
}

float TransformConstraint_to_min_x_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_min[0]);
}

void TransformConstraint_to_min_x_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_min[0] = value;
}

float TransformConstraint_to_min_y_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_min[1]);
}

void TransformConstraint_to_min_y_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_min[1] = value;
}

float TransformConstraint_to_min_z_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_min[2]);
}

void TransformConstraint_to_min_z_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_min[2] = value;
}

float TransformConstraint_to_max_x_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_max[0]);
}

void TransformConstraint_to_max_x_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_max[0] = value;
}

float TransformConstraint_to_max_y_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_max[1]);
}

void TransformConstraint_to_max_y_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_max[1] = value;
}

float TransformConstraint_to_max_z_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_max[2]);
}

void TransformConstraint_to_max_z_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_max[2] = value;
}

float TransformConstraint_from_min_x_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_min_rot[0]);
}

void TransformConstraint_from_min_x_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_min_rot[0] = value;
}

float TransformConstraint_from_min_y_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_min_rot[1]);
}

void TransformConstraint_from_min_y_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_min_rot[1] = value;
}

float TransformConstraint_from_min_z_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_min_rot[2]);
}

void TransformConstraint_from_min_z_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_min_rot[2] = value;
}

float TransformConstraint_from_max_x_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_max_rot[0]);
}

void TransformConstraint_from_max_x_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_max_rot[0] = value;
}

float TransformConstraint_from_max_y_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_max_rot[1]);
}

void TransformConstraint_from_max_y_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_max_rot[1] = value;
}

float TransformConstraint_from_max_z_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_max_rot[2]);
}

void TransformConstraint_from_max_z_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_max_rot[2] = value;
}

float TransformConstraint_to_min_x_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_min_rot[0]);
}

void TransformConstraint_to_min_x_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_min_rot[0] = value;
}

float TransformConstraint_to_min_y_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_min_rot[1]);
}

void TransformConstraint_to_min_y_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_min_rot[1] = value;
}

float TransformConstraint_to_min_z_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_min_rot[2]);
}

void TransformConstraint_to_min_z_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_min_rot[2] = value;
}

float TransformConstraint_to_max_x_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_max_rot[0]);
}

void TransformConstraint_to_max_x_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_max_rot[0] = value;
}

float TransformConstraint_to_max_y_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_max_rot[1]);
}

void TransformConstraint_to_max_y_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_max_rot[1] = value;
}

float TransformConstraint_to_max_z_rot_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_max_rot[2]);
}

void TransformConstraint_to_max_z_rot_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_max_rot[2] = value;
}

float TransformConstraint_from_min_x_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_min_scale[0]);
}

void TransformConstraint_from_min_x_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_min_scale[0] = value;
}

float TransformConstraint_from_min_y_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_min_scale[1]);
}

void TransformConstraint_from_min_y_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_min_scale[1] = value;
}

float TransformConstraint_from_min_z_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_min_scale[2]);
}

void TransformConstraint_from_min_z_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_min_scale[2] = value;
}

float TransformConstraint_from_max_x_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_max_scale[0]);
}

void TransformConstraint_from_max_x_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_max_scale[0] = value;
}

float TransformConstraint_from_max_y_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_max_scale[1]);
}

void TransformConstraint_from_max_y_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_max_scale[1] = value;
}

float TransformConstraint_from_max_z_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->from_max_scale[2]);
}

void TransformConstraint_from_max_z_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->from_max_scale[2] = value;
}

float TransformConstraint_to_min_x_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_min_scale[0]);
}

void TransformConstraint_to_min_x_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_min_scale[0] = value;
}

float TransformConstraint_to_min_y_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_min_scale[1]);
}

void TransformConstraint_to_min_y_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_min_scale[1] = value;
}

float TransformConstraint_to_min_z_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_min_scale[2]);
}

void TransformConstraint_to_min_z_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_min_scale[2] = value;
}

float TransformConstraint_to_max_x_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_max_scale[0]);
}

void TransformConstraint_to_max_x_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_max_scale[0] = value;
}

float TransformConstraint_to_max_y_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_max_scale[1]);
}

void TransformConstraint_to_max_y_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_max_scale[1] = value;
}

float TransformConstraint_to_max_z_scale_get(PointerRNA *ptr)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->to_max_scale[2]);
}

void TransformConstraint_to_max_z_scale_set(PointerRNA *ptr, float value)
{
	bTransformConstraint *data = (bTransformConstraint *)(((bConstraint *)ptr->data)->data);
	data->to_max_scale[2] = value;
}

PointerRNA ShrinkwrapConstraint_target_get(PointerRNA *ptr)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->target);
}

void ShrinkwrapConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->target = value.data;
}

int ShrinkwrapConstraint_shrinkwrap_type_get(PointerRNA *ptr)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->shrinkType);
}

void ShrinkwrapConstraint_shrinkwrap_type_set(PointerRNA *ptr, int value)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	data->shrinkType = value;
}

float ShrinkwrapConstraint_distance_get(PointerRNA *ptr)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->dist);
}

void ShrinkwrapConstraint_distance_set(PointerRNA *ptr, float value)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	data->dist = CLAMPIS(value, 0.0f, 100.0f);
}

int ShrinkwrapConstraint_project_axis_get(PointerRNA *ptr)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->projAxis);
}

void ShrinkwrapConstraint_project_axis_set(PointerRNA *ptr, int value)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	data->projAxis = value;
}

int ShrinkwrapConstraint_project_axis_space_get(PointerRNA *ptr)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->projAxisSpace);
}

void ShrinkwrapConstraint_project_axis_space_set(PointerRNA *ptr, int value)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	data->projAxisSpace = value;
}

float ShrinkwrapConstraint_project_limit_get(PointerRNA *ptr)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	return (float)(data->projLimit);
}

void ShrinkwrapConstraint_project_limit_set(PointerRNA *ptr, float value)
{
	bShrinkwrapConstraint *data = (bShrinkwrapConstraint *)(((bConstraint *)ptr->data)->data);
	data->projLimit = CLAMPIS(value, 0.0f, 100.0f);
}

float DampedTrackConstraint_head_tail_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->headtail);
}

void DampedTrackConstraint_head_tail_set(PointerRNA *ptr, float value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->headtail = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA DampedTrackConstraint_target_get(PointerRNA *ptr)
{
	bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void DampedTrackConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void DampedTrackConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int DampedTrackConstraint_subtarget_length(PointerRNA *ptr)
{
	bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void DampedTrackConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int DampedTrackConstraint_track_axis_get(PointerRNA *ptr)
{
	bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->trackflag);
}

void DampedTrackConstraint_track_axis_set(PointerRNA *ptr, int value)
{
	bDampTrackConstraint *data = (bDampTrackConstraint *)(((bConstraint *)ptr->data)->data);
	data->trackflag = value;
}

PointerRNA SplineIKConstraint_target_get(PointerRNA *ptr)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void SplineIKConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

int SplineIKConstraint_chain_count_get(PointerRNA *ptr)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->chainlen);
}

void SplineIKConstraint_chain_count_set(PointerRNA *ptr, int value)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	data->chainlen = CLAMPIS(value, 1, 255);
}

void SplineIKConstraint_joint_bindings_get(PointerRNA *ptr, float values[])
{
	rna_SplineIKConstraint_joint_bindings_get(ptr, values);
}

void SplineIKConstraint_joint_bindings_set(PointerRNA *ptr, const float values[])
{
	rna_SplineIKConstraint_joint_bindings_set(ptr, values);
}

int SplineIKConstraint_use_chain_offset_get(PointerRNA *ptr)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void SplineIKConstraint_use_chain_offset_set(PointerRNA *ptr, int value)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int SplineIKConstraint_use_even_divisions_get(PointerRNA *ptr)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void SplineIKConstraint_use_even_divisions_set(PointerRNA *ptr, int value)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

int SplineIKConstraint_use_y_stretch_get(PointerRNA *ptr)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	return !(((data->flag) & 4) != 0);
}

void SplineIKConstraint_use_y_stretch_set(PointerRNA *ptr, int value)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	if (!value) data->flag |= 4;
	else data->flag &= ~4;
}

int SplineIKConstraint_use_curve_radius_get(PointerRNA *ptr)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	return !(((data->flag) & 16) != 0);
}

void SplineIKConstraint_use_curve_radius_set(PointerRNA *ptr, int value)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	if (!value) data->flag |= 16;
	else data->flag &= ~16;
}

int SplineIKConstraint_xz_scale_mode_get(PointerRNA *ptr)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->xzScaleMode);
}

void SplineIKConstraint_xz_scale_mode_set(PointerRNA *ptr, int value)
{
	bSplineIKConstraint *data = (bSplineIKConstraint *)(((bConstraint *)ptr->data)->data);
	data->xzScaleMode = value;
}

float PivotConstraint_head_tail_get(PointerRNA *ptr)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	return (float)(data->headtail);
}

void PivotConstraint_head_tail_set(PointerRNA *ptr, float value)
{
	bConstraint *data = (bConstraint *)(ptr->data);
	data->headtail = CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA PivotConstraint_target_get(PointerRNA *ptr)
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->tar);
}

void PivotConstraint_target_set(PointerRNA *ptr, PointerRNA value)
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->tar = value.data;
}

void PivotConstraint_subtarget_get(PointerRNA *ptr, char *value)
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->subtarget, 64);
}

int PivotConstraint_subtarget_length(PointerRNA *ptr)
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->subtarget);
}

void PivotConstraint_subtarget_set(PointerRNA *ptr, const char *value)
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->subtarget, value, 64);
}

int PivotConstraint_use_relative_location_get(PointerRNA *ptr)
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	return !(((data->flag) & 1) != 0);
}

void PivotConstraint_use_relative_location_set(PointerRNA *ptr, int value)
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	if (!value) data->flag |= 1;
	else data->flag &= ~1;
}

void PivotConstraint_offset_get(PointerRNA *ptr, float values[3])
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->offset)[i]);
	}
}

void PivotConstraint_offset_set(PointerRNA *ptr, const float values[3])
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->offset)[i] = values[i];
	}
}

int PivotConstraint_rotation_range_get(PointerRNA *ptr)
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	return (int)(data->rotAxis);
}

void PivotConstraint_rotation_range_set(PointerRNA *ptr, int value)
{
	bPivotConstraint *data = (bPivotConstraint *)(((bConstraint *)ptr->data)->data);
	data->rotAxis = value;
}

PointerRNA FollowTrackConstraint_clip_get(PointerRNA *ptr)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClip, data->clip);
}

void FollowTrackConstraint_clip_set(PointerRNA *ptr, PointerRNA value)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);

	if (data->clip)
		id_us_min((ID *)data->clip);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->clip = value.data;
}

void FollowTrackConstraint_track_get(PointerRNA *ptr, char *value)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->track, 64);
}

int FollowTrackConstraint_track_length(PointerRNA *ptr)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->track);
}

void FollowTrackConstraint_track_set(PointerRNA *ptr, const char *value)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->track, value, 64);
}

int FollowTrackConstraint_use_active_clip_get(PointerRNA *ptr)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void FollowTrackConstraint_use_active_clip_set(PointerRNA *ptr, int value)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int FollowTrackConstraint_use_3d_position_get(PointerRNA *ptr)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void FollowTrackConstraint_use_3d_position_set(PointerRNA *ptr, int value)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

void FollowTrackConstraint_object_get(PointerRNA *ptr, char *value)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->object, 64);
}

int FollowTrackConstraint_object_length(PointerRNA *ptr)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->object);
}

void FollowTrackConstraint_object_set(PointerRNA *ptr, const char *value)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->object, value, 64);
}

PointerRNA FollowTrackConstraint_camera_get(PointerRNA *ptr)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->camera);
}

void FollowTrackConstraint_camera_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Constraint_followTrack_camera_set(ptr, value);
}

PointerRNA FollowTrackConstraint_depth_object_get(PointerRNA *ptr)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->depth_ob);
}

void FollowTrackConstraint_depth_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Constraint_followTrack_depthObject_set(ptr, value);
}

int FollowTrackConstraint_frame_method_get(PointerRNA *ptr)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return ((data->frame_method) & 3);
}

void FollowTrackConstraint_frame_method_set(PointerRNA *ptr, int value)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	data->frame_method &= ~3;
	data->frame_method |= value;
}

int FollowTrackConstraint_use_undistorted_position_get(PointerRNA *ptr)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void FollowTrackConstraint_use_undistorted_position_set(PointerRNA *ptr, int value)
{
	bFollowTrackConstraint *data = (bFollowTrackConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

PointerRNA CameraSolverConstraint_clip_get(PointerRNA *ptr)
{
	bCameraSolverConstraint *data = (bCameraSolverConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClip, data->clip);
}

void CameraSolverConstraint_clip_set(PointerRNA *ptr, PointerRNA value)
{
	bCameraSolverConstraint *data = (bCameraSolverConstraint *)(((bConstraint *)ptr->data)->data);

	if (data->clip)
		id_us_min((ID *)data->clip);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->clip = value.data;
}

int CameraSolverConstraint_use_active_clip_get(PointerRNA *ptr)
{
	bCameraSolverConstraint *data = (bCameraSolverConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void CameraSolverConstraint_use_active_clip_set(PointerRNA *ptr, int value)
{
	bCameraSolverConstraint *data = (bCameraSolverConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

PointerRNA ObjectSolverConstraint_clip_get(PointerRNA *ptr)
{
	bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MovieClip, data->clip);
}

void ObjectSolverConstraint_clip_set(PointerRNA *ptr, PointerRNA value)
{
	bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);

	if (data->clip)
		id_us_min((ID *)data->clip);
	if (value.data)
		id_us_plus((ID *)value.data);

	data->clip = value.data;
}

int ObjectSolverConstraint_use_active_clip_get(PointerRNA *ptr)
{
	bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void ObjectSolverConstraint_use_active_clip_set(PointerRNA *ptr, int value)
{
	bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

void ObjectSolverConstraint_object_get(PointerRNA *ptr, char *value)
{
	bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(value, data->object, 64);
}

int ObjectSolverConstraint_object_length(PointerRNA *ptr)
{
	bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
	return strlen(data->object);
}

void ObjectSolverConstraint_object_set(PointerRNA *ptr, const char *value)
{
	bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
	BLI_strncpy_utf8(data->object, value, 64);
}

PointerRNA ObjectSolverConstraint_camera_get(PointerRNA *ptr)
{
	bObjectSolverConstraint *data = (bObjectSolverConstraint *)(((bConstraint *)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->camera);
}

void ObjectSolverConstraint_camera_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Constraint_objectSolver_camera_set(ptr, value);
}


























int SplineIKConstraint_joint_bindings_get_length(PointerRNA *ptr, int *arraylen)
{
	return rna_SplineIKConstraint_joint_bindings_get_length(ptr, arraylen);
}






/* Constraint */
CollectionPropertyRNA rna_Constraint_rna_properties = {
	{(PropertyRNA *)&rna_Constraint_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_rna_properties_begin, Constraint_rna_properties_next, Constraint_rna_properties_end, Constraint_rna_properties_get, NULL, NULL, Constraint_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Constraint_rna_type = {
	{(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Constraint_name = {
	{(PropertyRNA *)&rna_Constraint_type, (PropertyRNA *)&rna_Constraint_rna_type,
	-1, "name", 262145, "Name",
	"Constraint name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 85590021, NULL, NULL,
	0, -1, NULL},
	Constraint_name_get, Constraint_name_length, Constraint_name_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_Constraint_type_items[32] = {
	{0, "", 0, "Motion Tracking", ""},
	{27, "CAMERA_SOLVER", 459, "Camera Solver", ""},
	{26, "FOLLOW_TRACK", 459, "Follow Track", ""},
	{28, "OBJECT_SOLVER", 459, "Object Solver", ""},
	{0, "", 0, "Transform", ""},
	{9, "COPY_LOCATION", 459, "Copy Location", "Copy the location of a target (with an optional offset), so that they move together"},
	{8, "COPY_ROTATION", 459, "Copy Rotation", "Copy the rotation of a target (with an optional offset), so that they rotate together"},
	{10, "COPY_SCALE", 459, "Copy Scale", "Copy the scale factors of a target (with an optional offset), so that they are scaled by the same amount"},
	{23, "COPY_TRANSFORMS", 459, "Copy Transforms", "Copy all the transformations of a target, so that they move together"},
	{14, "LIMIT_DISTANCE", 459, "Limit Distance", "Restrict movements to within a certain distance of a target (at the time of constraint evaluation only)"},
	{6, "LIMIT_LOCATION", 459, "Limit Location", "Restrict movement along each axis within given ranges"},
	{5, "LIMIT_ROTATION", 459, "Limit Rotation", "Restrict rotation along each axis within given ranges"},
	{7, "LIMIT_SCALE", 459, "Limit Scale", "Restrict scaling along each axis with given ranges"},
	{24, "MAINTAIN_VOLUME", 459, "Maintain Volume", "Compensate for scaling one axis by applying suitable scaling to the other two axes"},
	{19, "TRANSFORM", 459, "Transformation", "Use one transform property from target to control another (or same) property on owner"},
	{0, "", 0, "Tracking", ""},
	{18, "CLAMP_TO", 459, "Clamp To", "Restrict movements to lie along a curve by remapping location along curve\'s longest axis"},
	{21, "DAMPED_TRACK", 459, "Damped Track", "Point towards a target by performing the smallest rotation necessary"},
	{3, "IK", 459, "Inverse Kinematics", "Control a chain of bones by specifying the endpoint target (Bones only)"},
	{13, "LOCKED_TRACK", 459, "Locked Track", "Rotate around the specified (\'locked\') axis to point towards a target"},
	{22, "SPLINE_IK", 459, "Spline IK", "Align chain of bones along a curve (Bones only)"},
	{15, "STRETCH_TO", 459, "Stretch To", "Stretch along Y-Axis to point towards a target"},
	{2, "TRACK_TO", 459, "Track To", "Legacy tracking constraint prone to twisting artifacts"},
	{0, "", 0, "Relationship", ""},
	{12, "ACTION", 459, "Action", "Use transform property of target to look up pose for owner from an Action"},
	{1, "CHILD_OF", 459, "Child Of", "Make target the \'detachable\' parent of owner"},
	{16, "FLOOR", 459, "Floor", "Use position (and optionally rotation) of target to define a \'wall\' or \'floor\' that the owner can not cross"},
	{4, "FOLLOW_PATH", 459, "Follow Path", "Use to animate an object/bone following a path"},
	{25, "PIVOT", 459, "Pivot", "Change pivot point for transforms (buggy)"},
	{17, "RIGID_BODY_JOINT", 459, "Rigid Body Joint", "Use to define a Rigid Body Constraint (for Game Engine use only)"},
	{20, "SHRINKWRAP", 459, "Shrinkwrap", "Restrict movements to surface of target mesh"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Constraint_type = {
	{(PropertyRNA *)&rna_Constraint_owner_space, (PropertyRNA *)&rna_Constraint_name,
	-1, "type", 2, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_type_get, NULL, NULL, NULL, NULL, NULL, rna_Constraint_type_items, 31, 27
};

static EnumPropertyItem rna_Constraint_owner_space_items[5] = {
	{0, "WORLD", 0, "World Space", "The constraint is applied relative to the world coordinate system"},
	{2, "POSE", 0, "Pose Space", "The constraint is applied in Pose Space, the object transformation is ignored"},
	{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The constraint is applied relative to the local coordinate system of the object, with the parent transformation added"},
	{1, "LOCAL", 0, "Local Space", "The constraint is applied relative to the local coordinate system of the object"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Constraint_owner_space = {
	{(PropertyRNA *)&rna_Constraint_target_space, (PropertyRNA *)&rna_Constraint_type,
	-1, "owner_space", 3, "Owner Space",
	"Space that owner is evaluated in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_owner_space_get, Constraint_owner_space_set, rna_Constraint_owner_space_itemf, NULL, NULL, NULL, rna_Constraint_owner_space_items, 4, 0
};

static EnumPropertyItem rna_Constraint_target_space_items[5] = {
	{0, "WORLD", 0, "World Space", "The transformation of the target is evaluated relative to the world coordinate system"},
	{2, "POSE", 0, "Pose Space", "The transformation of the target is only evaluated in the Pose Space, the target armature object transformation is ignored"},
	{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The transformation of the target bone is evaluated relative its local coordinate system, with the parent transformation added"},
	{1, "LOCAL", 0, "Local Space", "The transformation of the target is evaluated relative to its local coordinate system"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Constraint_target_space = {
	{(PropertyRNA *)&rna_Constraint_mute, (PropertyRNA *)&rna_Constraint_owner_space,
	-1, "target_space", 3, "Target Space",
	"Space that target is evaluated in",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_target_space_get, Constraint_target_space_set, rna_Constraint_target_space_itemf, NULL, NULL, NULL, rna_Constraint_target_space_items, 4, 0
};

BoolPropertyRNA rna_Constraint_mute = {
	{(PropertyRNA *)&rna_Constraint_show_expanded, (PropertyRNA *)&rna_Constraint_target_space,
	-1, "mute", 3, "Disable",
	"Enable/Disable Constraint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_mute_get, Constraint_mute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Constraint_show_expanded = {
	{(PropertyRNA *)&rna_Constraint_is_valid, (PropertyRNA *)&rna_Constraint_mute,
	-1, "show_expanded", 4099, "Expanded",
	"Constraint\'s panel is expanded in UI",
	4, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_show_expanded_get, Constraint_show_expanded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Constraint_is_valid = {
	{(PropertyRNA *)&rna_Constraint_active, (PropertyRNA *)&rna_Constraint_show_expanded,
	-1, "is_valid", 2, "Valid",
	"Constraint has valid settings and can be evaluated",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_is_valid_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Constraint_active = {
	{(PropertyRNA *)&rna_Constraint_is_proxy_local, (PropertyRNA *)&rna_Constraint_is_valid,
	-1, "active", 3, "Active",
	"Constraint is the one being edited ",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_active_get, Constraint_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_Constraint_is_proxy_local = {
	{(PropertyRNA *)&rna_Constraint_influence, (PropertyRNA *)&rna_Constraint_active,
	-1, "is_proxy_local", 3, "Proxy Local",
	"Constraint was added in this proxy instance (i.e. did not belong to source Armature)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Constraint_is_proxy_local_get, Constraint_is_proxy_local_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Constraint_influence = {
	{(PropertyRNA *)&rna_Constraint_error_location, (PropertyRNA *)&rna_Constraint_is_proxy_local,
	-1, "influence", 8195, "Influence",
	"Amount of influence constraint will have on the final solution",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_influence_update, 85590016, NULL, NULL,
	offsetof(bConstraint, enforce), 4, NULL},
	Constraint_influence_get, Constraint_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Constraint_error_location = {
	{(PropertyRNA *)&rna_Constraint_error_rotation, (PropertyRNA *)&rna_Constraint_influence,
	-1, "error_location", 8194, "Lin error",
	"Amount of residual error in Blender space unit for constraints that work on position",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bConstraint, lin_error), 4, NULL},
	Constraint_error_location_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Constraint_error_rotation = {
	{NULL, (PropertyRNA *)&rna_Constraint_error_location,
	-1, "error_rotation", 8194, "Rot error",
	"Amount of residual error in radians for constraints that work on orientation",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bConstraint, rot_error), 4, NULL},
	Constraint_error_rotation_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_Constraint = {
	{(ContainerRNA *)&RNA_ConstraintTarget, (ContainerRNA *)&RNA_ColorManagedSequencerColorspaceSettings,
	NULL,
	{(PropertyRNA *)&rna_Constraint_rna_properties, (PropertyRNA *)&rna_Constraint_error_rotation}},
	"Constraint", NULL, NULL, 4, "Constraint",
	"Constraint modifying the transformation of objects and bones",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	NULL,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Constraint Target */
CollectionPropertyRNA rna_ConstraintTarget_rna_properties = {
	{(PropertyRNA *)&rna_ConstraintTarget_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ConstraintTarget_rna_properties_begin, ConstraintTarget_rna_properties_next, ConstraintTarget_rna_properties_end, ConstraintTarget_rna_properties_get, NULL, NULL, ConstraintTarget_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ConstraintTarget_rna_type = {
	{(PropertyRNA *)&rna_ConstraintTarget_target, (PropertyRNA *)&rna_ConstraintTarget_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ConstraintTarget_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ConstraintTarget_target = {
	{(PropertyRNA *)&rna_ConstraintTarget_subtarget, (PropertyRNA *)&rna_ConstraintTarget_rna_type,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ConstraintTarget_target_get, ConstraintTarget_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_ConstraintTarget_subtarget = {
	{NULL, (PropertyRNA *)&rna_ConstraintTarget_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ConstraintTarget_subtarget_get, ConstraintTarget_subtarget_length, ConstraintTarget_subtarget_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_ConstraintTarget = {
	{(ContainerRNA *)&RNA_ChildOfConstraint, (ContainerRNA *)&RNA_Constraint,
	NULL,
	{(PropertyRNA *)&rna_ConstraintTarget_rna_properties, (PropertyRNA *)&rna_ConstraintTarget_subtarget}},
	"ConstraintTarget", NULL, NULL, 4, "Constraint Target",
	"Target object for multi-target constraints",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ConstraintTarget_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Child Of Constraint */
PointerPropertyRNA rna_ChildOfConstraint_target = {
	{(PropertyRNA *)&rna_ChildOfConstraint_subtarget, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_target_get, ChildOfConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_ChildOfConstraint_subtarget = {
	{(PropertyRNA *)&rna_ChildOfConstraint_use_location_x, (PropertyRNA *)&rna_ChildOfConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_subtarget_get, ChildOfConstraint_subtarget_length, ChildOfConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_ChildOfConstraint_use_location_x = {
	{(PropertyRNA *)&rna_ChildOfConstraint_use_location_y, (PropertyRNA *)&rna_ChildOfConstraint_subtarget,
	-1, "use_location_x", 3, "Location X",
	"Use X Location of Parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_use_location_x_get, ChildOfConstraint_use_location_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ChildOfConstraint_use_location_y = {
	{(PropertyRNA *)&rna_ChildOfConstraint_use_location_z, (PropertyRNA *)&rna_ChildOfConstraint_use_location_x,
	-1, "use_location_y", 3, "Location Y",
	"Use Y Location of Parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_use_location_y_get, ChildOfConstraint_use_location_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ChildOfConstraint_use_location_z = {
	{(PropertyRNA *)&rna_ChildOfConstraint_use_rotation_x, (PropertyRNA *)&rna_ChildOfConstraint_use_location_y,
	-1, "use_location_z", 3, "Location Z",
	"Use Z Location of Parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_use_location_z_get, ChildOfConstraint_use_location_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ChildOfConstraint_use_rotation_x = {
	{(PropertyRNA *)&rna_ChildOfConstraint_use_rotation_y, (PropertyRNA *)&rna_ChildOfConstraint_use_location_z,
	-1, "use_rotation_x", 3, "Rotation X",
	"Use X Rotation of Parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_use_rotation_x_get, ChildOfConstraint_use_rotation_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ChildOfConstraint_use_rotation_y = {
	{(PropertyRNA *)&rna_ChildOfConstraint_use_rotation_z, (PropertyRNA *)&rna_ChildOfConstraint_use_rotation_x,
	-1, "use_rotation_y", 3, "Rotation Y",
	"Use Y Rotation of Parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_use_rotation_y_get, ChildOfConstraint_use_rotation_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ChildOfConstraint_use_rotation_z = {
	{(PropertyRNA *)&rna_ChildOfConstraint_use_scale_x, (PropertyRNA *)&rna_ChildOfConstraint_use_rotation_y,
	-1, "use_rotation_z", 3, "Rotation Z",
	"Use Z Rotation of Parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_use_rotation_z_get, ChildOfConstraint_use_rotation_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ChildOfConstraint_use_scale_x = {
	{(PropertyRNA *)&rna_ChildOfConstraint_use_scale_y, (PropertyRNA *)&rna_ChildOfConstraint_use_rotation_z,
	-1, "use_scale_x", 3, "Scale X",
	"Use X Scale of Parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_use_scale_x_get, ChildOfConstraint_use_scale_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ChildOfConstraint_use_scale_y = {
	{(PropertyRNA *)&rna_ChildOfConstraint_use_scale_z, (PropertyRNA *)&rna_ChildOfConstraint_use_scale_x,
	-1, "use_scale_y", 3, "Scale Y",
	"Use Y Scale of Parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_use_scale_y_get, ChildOfConstraint_use_scale_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ChildOfConstraint_use_scale_z = {
	{(PropertyRNA *)&rna_ChildOfConstraint_inverse_matrix, (PropertyRNA *)&rna_ChildOfConstraint_use_scale_y,
	-1, "use_scale_z", 3, "Scale Z",
	"Use Z Scale of Parent",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ChildOfConstraint_use_scale_z_get, ChildOfConstraint_use_scale_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_ChildOfConstraint_inverse_matrix_default[16] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ChildOfConstraint_inverse_matrix = {
	{NULL, (PropertyRNA *)&rna_ChildOfConstraint_use_scale_z,
	-1, "inverse_matrix", 8193, "Inverse Matrix",
	"Transformation matrix to apply before",
	0, "*",
	PROP_FLOAT, PROP_MATRIX | PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	offsetof(bChildOfConstraint, invmat), 4, NULL},
	NULL, NULL, ChildOfConstraint_inverse_matrix_get, ChildOfConstraint_inverse_matrix_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ChildOfConstraint_inverse_matrix_default
};

StructRNA RNA_ChildOfConstraint = {
	{(ContainerRNA *)&RNA_PythonConstraint, (ContainerRNA *)&RNA_ConstraintTarget,
	NULL,
	{(PropertyRNA *)&rna_ChildOfConstraint_target, (PropertyRNA *)&rna_ChildOfConstraint_inverse_matrix}},
	"ChildOfConstraint", NULL, NULL, 4, "Child Of Constraint",
	"Create constraint-based parent-child relationship",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Python Constraint */
CollectionPropertyRNA rna_PythonConstraint_targets = {
	{(PropertyRNA *)&rna_PythonConstraint_target_count, NULL,
	-1, "targets", 0, "Targets",
	"Target Objects",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PythonConstraint_targets_begin, PythonConstraint_targets_next, PythonConstraint_targets_end, PythonConstraint_targets_get, NULL, PythonConstraint_targets_lookup_int, NULL, NULL, &RNA_ConstraintTarget
};

IntPropertyRNA rna_PythonConstraint_target_count = {
	{(PropertyRNA *)&rna_PythonConstraint_text, (PropertyRNA *)&rna_PythonConstraint_targets,
	-1, "target_count", 8195, "Number of Targets",
	"Usually only 1-3 are needed",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	offsetof(bPythonConstraint, tarnum), 0, NULL},
	PythonConstraint_target_count_get, PythonConstraint_target_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_PythonConstraint_text = {
	{(PropertyRNA *)&rna_PythonConstraint_use_targets, (PropertyRNA *)&rna_PythonConstraint_target_count,
	-1, "text", 8388673, "Script",
	"The text object that contains the Python script",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	PythonConstraint_text_get, PythonConstraint_text_set, NULL, NULL,&RNA_Text
};

BoolPropertyRNA rna_PythonConstraint_use_targets = {
	{(PropertyRNA *)&rna_PythonConstraint_has_script_error, (PropertyRNA *)&rna_PythonConstraint_text,
	-1, "use_targets", 3, "Use Targets",
	"Use the targets indicated in the constraint panel",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	PythonConstraint_use_targets_get, PythonConstraint_use_targets_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_PythonConstraint_has_script_error = {
	{NULL, (PropertyRNA *)&rna_PythonConstraint_use_targets,
	-1, "has_script_error", 2, "Script Error",
	"The linked Python script has thrown an error",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PythonConstraint_has_script_error_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_PythonConstraint = {
	{(ContainerRNA *)&RNA_StretchToConstraint, (ContainerRNA *)&RNA_ChildOfConstraint,
	NULL,
	{(PropertyRNA *)&rna_PythonConstraint_targets, (PropertyRNA *)&rna_PythonConstraint_has_script_error}},
	"PythonConstraint", NULL, NULL, 4, "Python Constraint",
	"Use Python script for constraint evaluation",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Stretch To Constraint */
FloatPropertyRNA rna_StretchToConstraint_head_tail = {
	{(PropertyRNA *)&rna_StretchToConstraint_target, NULL,
	-1, "head_tail", 8195, "Head/Tail",
	"Target along length of bone: Head=0, Tail=1",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bConstraint, headtail), 4, NULL},
	StretchToConstraint_head_tail_get, StretchToConstraint_head_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_StretchToConstraint_target = {
	{(PropertyRNA *)&rna_StretchToConstraint_subtarget, (PropertyRNA *)&rna_StretchToConstraint_head_tail,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	StretchToConstraint_target_get, StretchToConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_StretchToConstraint_subtarget = {
	{(PropertyRNA *)&rna_StretchToConstraint_volume, (PropertyRNA *)&rna_StretchToConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	StretchToConstraint_subtarget_get, StretchToConstraint_subtarget_length, StretchToConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_StretchToConstraint_volume_items[5] = {
	{0, "VOLUME_XZX", 0, "XZ", ""},
	{1, "VOLUME_X", 0, "X", ""},
	{2, "VOLUME_Z", 0, "Z", ""},
	{3, "NO_VOLUME", 0, "None", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_StretchToConstraint_volume = {
	{(PropertyRNA *)&rna_StretchToConstraint_keep_axis, (PropertyRNA *)&rna_StretchToConstraint_subtarget,
	-1, "volume", 3, "Maintain Volume",
	"Maintain the object\'s volume as it stretches",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	StretchToConstraint_volume_get, StretchToConstraint_volume_set, NULL, NULL, NULL, NULL, rna_StretchToConstraint_volume_items, 4, 0
};

static EnumPropertyItem rna_StretchToConstraint_keep_axis_items[3] = {
	{0, "PLANE_X", 0, "X", "Keep X Axis"},
	{2, "PLANE_Z", 0, "Z", "Keep Z Axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_StretchToConstraint_keep_axis = {
	{(PropertyRNA *)&rna_StretchToConstraint_rest_length, (PropertyRNA *)&rna_StretchToConstraint_volume,
	-1, "keep_axis", 3, "Keep Axis",
	"Axis to maintain during stretch",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	StretchToConstraint_keep_axis_get, StretchToConstraint_keep_axis_set, NULL, NULL, NULL, NULL, rna_StretchToConstraint_keep_axis_items, 2, 0
};

FloatPropertyRNA rna_StretchToConstraint_rest_length = {
	{(PropertyRNA *)&rna_StretchToConstraint_bulge, (PropertyRNA *)&rna_StretchToConstraint_keep_axis,
	-1, "rest_length", 8195, "Original Length",
	"Length at rest position",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bStretchToConstraint, orglength), 4, NULL},
	StretchToConstraint_rest_length_get, StretchToConstraint_rest_length_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_StretchToConstraint_bulge = {
	{(PropertyRNA *)&rna_StretchToConstraint_use_bulge_min, (PropertyRNA *)&rna_StretchToConstraint_rest_length,
	-1, "bulge", 8195, "Volume Variation",
	"Factor between volume variation and stretching",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bStretchToConstraint, bulge), 4, NULL},
	StretchToConstraint_bulge_get, StretchToConstraint_bulge_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_StretchToConstraint_use_bulge_min = {
	{(PropertyRNA *)&rna_StretchToConstraint_use_bulge_max, (PropertyRNA *)&rna_StretchToConstraint_bulge,
	-1, "use_bulge_min", 3, "Use Volume Variation Minimum",
	"Use lower limit for volume variation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	StretchToConstraint_use_bulge_min_get, StretchToConstraint_use_bulge_min_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_StretchToConstraint_use_bulge_max = {
	{(PropertyRNA *)&rna_StretchToConstraint_bulge_min, (PropertyRNA *)&rna_StretchToConstraint_use_bulge_min,
	-1, "use_bulge_max", 3, "Use Volume Variation Maximum",
	"Use upper limit for volume variation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	StretchToConstraint_use_bulge_max_get, StretchToConstraint_use_bulge_max_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_StretchToConstraint_bulge_min = {
	{(PropertyRNA *)&rna_StretchToConstraint_bulge_max, (PropertyRNA *)&rna_StretchToConstraint_use_bulge_max,
	-1, "bulge_min", 8195, "Volume Variation Minimum",
	"Minimum volume stretching factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bStretchToConstraint, bulge_min), 4, NULL},
	StretchToConstraint_bulge_min_get, StretchToConstraint_bulge_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_StretchToConstraint_bulge_max = {
	{(PropertyRNA *)&rna_StretchToConstraint_bulge_smooth, (PropertyRNA *)&rna_StretchToConstraint_bulge_min,
	-1, "bulge_max", 8195, "Volume Variation Maximum",
	"Maximum volume stretching factor",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bStretchToConstraint, bulge_max), 4, NULL},
	StretchToConstraint_bulge_max_get, StretchToConstraint_bulge_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 1.0f, 100.0f, 1.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_StretchToConstraint_bulge_smooth = {
	{NULL, (PropertyRNA *)&rna_StretchToConstraint_bulge_max,
	-1, "bulge_smooth", 8195, "Volume Variation Smoothness",
	"",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bStretchToConstraint, bulge_smooth), 4, NULL},
	StretchToConstraint_bulge_smooth_get, StretchToConstraint_bulge_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_StretchToConstraint = {
	{(ContainerRNA *)&RNA_FollowPathConstraint, (ContainerRNA *)&RNA_PythonConstraint,
	NULL,
	{(PropertyRNA *)&rna_StretchToConstraint_head_tail, (PropertyRNA *)&rna_StretchToConstraint_bulge_smooth}},
	"StretchToConstraint", NULL, NULL, 4, "Stretch To Constraint",
	"Stretch to meet the target object",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Follow Path Constraint */
PointerPropertyRNA rna_FollowPathConstraint_target = {
	{(PropertyRNA *)&rna_FollowPathConstraint_offset, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowPathConstraint_target_get, FollowPathConstraint_target_set, NULL, rna_Curve_object_poll,&RNA_Object
};

FloatPropertyRNA rna_FollowPathConstraint_offset = {
	{(PropertyRNA *)&rna_FollowPathConstraint_offset_factor, (PropertyRNA *)&rna_FollowPathConstraint_target,
	-1, "offset", 8195, "Offset",
	"Offset from the position corresponding to the time frame",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bFollowPathConstraint, offset), 4, NULL},
	FollowPathConstraint_offset_get, FollowPathConstraint_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FollowPathConstraint_offset_factor = {
	{(PropertyRNA *)&rna_FollowPathConstraint_forward_axis, (PropertyRNA *)&rna_FollowPathConstraint_offset,
	-1, "offset_factor", 8195, "Offset Factor",
	"Percentage value defining target position along length of curve",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bFollowPathConstraint, offset_fac), 4, NULL},
	FollowPathConstraint_offset_factor_get, FollowPathConstraint_offset_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_FollowPathConstraint_forward_axis_items[7] = {
	{0, "FORWARD_X", 0, "X", ""},
	{1, "FORWARD_Y", 0, "Y", ""},
	{2, "FORWARD_Z", 0, "Z", ""},
	{3, "TRACK_NEGATIVE_X", 0, "-X", ""},
	{4, "TRACK_NEGATIVE_Y", 0, "-Y", ""},
	{5, "TRACK_NEGATIVE_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FollowPathConstraint_forward_axis = {
	{(PropertyRNA *)&rna_FollowPathConstraint_up_axis, (PropertyRNA *)&rna_FollowPathConstraint_offset_factor,
	-1, "forward_axis", 3, "Forward Axis",
	"Axis that points forward along the path",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowPathConstraint_forward_axis_get, FollowPathConstraint_forward_axis_set, NULL, NULL, NULL, NULL, rna_FollowPathConstraint_forward_axis_items, 6, 0
};

static EnumPropertyItem rna_FollowPathConstraint_up_axis_items[4] = {
	{0, "UP_X", 0, "X", ""},
	{1, "UP_Y", 0, "Y", ""},
	{2, "UP_Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FollowPathConstraint_up_axis = {
	{(PropertyRNA *)&rna_FollowPathConstraint_use_curve_follow, (PropertyRNA *)&rna_FollowPathConstraint_forward_axis,
	-1, "up_axis", 3, "Up Axis",
	"Axis that points upward",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowPathConstraint_up_axis_get, FollowPathConstraint_up_axis_set, NULL, NULL, NULL, NULL, rna_FollowPathConstraint_up_axis_items, 3, 0
};

BoolPropertyRNA rna_FollowPathConstraint_use_curve_follow = {
	{(PropertyRNA *)&rna_FollowPathConstraint_use_fixed_location, (PropertyRNA *)&rna_FollowPathConstraint_up_axis,
	-1, "use_curve_follow", 3, "Follow Curve",
	"Object will follow the heading and banking of the curve",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowPathConstraint_use_curve_follow_get, FollowPathConstraint_use_curve_follow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FollowPathConstraint_use_fixed_location = {
	{(PropertyRNA *)&rna_FollowPathConstraint_use_curve_radius, (PropertyRNA *)&rna_FollowPathConstraint_use_curve_follow,
	-1, "use_fixed_location", 3, "Fixed Position",
	"Object will stay locked to a single point somewhere along the length of the curve regardless of time",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowPathConstraint_use_fixed_location_get, FollowPathConstraint_use_fixed_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FollowPathConstraint_use_curve_radius = {
	{NULL, (PropertyRNA *)&rna_FollowPathConstraint_use_fixed_location,
	-1, "use_curve_radius", 3, "Curve Radius",
	"Object is scaled by the curve radius",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowPathConstraint_use_curve_radius_get, FollowPathConstraint_use_curve_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_FollowPathConstraint = {
	{(ContainerRNA *)&RNA_LockedTrackConstraint, (ContainerRNA *)&RNA_StretchToConstraint,
	NULL,
	{(PropertyRNA *)&rna_FollowPathConstraint_target, (PropertyRNA *)&rna_FollowPathConstraint_use_curve_radius}},
	"FollowPathConstraint", NULL, NULL, 4, "Follow Path Constraint",
	"Lock motion to the target path",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Locked Track Constraint */
FloatPropertyRNA rna_LockedTrackConstraint_head_tail = {
	{(PropertyRNA *)&rna_LockedTrackConstraint_target, NULL,
	-1, "head_tail", 8195, "Head/Tail",
	"Target along length of bone: Head=0, Tail=1",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bConstraint, headtail), 4, NULL},
	LockedTrackConstraint_head_tail_get, LockedTrackConstraint_head_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_LockedTrackConstraint_target = {
	{(PropertyRNA *)&rna_LockedTrackConstraint_subtarget, (PropertyRNA *)&rna_LockedTrackConstraint_head_tail,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LockedTrackConstraint_target_get, LockedTrackConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_LockedTrackConstraint_subtarget = {
	{(PropertyRNA *)&rna_LockedTrackConstraint_track_axis, (PropertyRNA *)&rna_LockedTrackConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LockedTrackConstraint_subtarget_get, LockedTrackConstraint_subtarget_length, LockedTrackConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_LockedTrackConstraint_track_axis_items[7] = {
	{0, "TRACK_X", 0, "X", ""},
	{1, "TRACK_Y", 0, "Y", ""},
	{2, "TRACK_Z", 0, "Z", ""},
	{3, "TRACK_NEGATIVE_X", 0, "-X", ""},
	{4, "TRACK_NEGATIVE_Y", 0, "-Y", ""},
	{5, "TRACK_NEGATIVE_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LockedTrackConstraint_track_axis = {
	{(PropertyRNA *)&rna_LockedTrackConstraint_lock_axis, (PropertyRNA *)&rna_LockedTrackConstraint_subtarget,
	-1, "track_axis", 3, "Track Axis",
	"Axis that points to the target object",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LockedTrackConstraint_track_axis_get, LockedTrackConstraint_track_axis_set, NULL, NULL, NULL, NULL, rna_LockedTrackConstraint_track_axis_items, 6, 0
};

static EnumPropertyItem rna_LockedTrackConstraint_lock_axis_items[4] = {
	{0, "LOCK_X", 0, "X", ""},
	{1, "LOCK_Y", 0, "Y", ""},
	{2, "LOCK_Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LockedTrackConstraint_lock_axis = {
	{NULL, (PropertyRNA *)&rna_LockedTrackConstraint_track_axis,
	-1, "lock_axis", 3, "Locked Axis",
	"Axis that points upward",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LockedTrackConstraint_lock_axis_get, LockedTrackConstraint_lock_axis_set, NULL, NULL, NULL, NULL, rna_LockedTrackConstraint_lock_axis_items, 3, 0
};

StructRNA RNA_LockedTrackConstraint = {
	{(ContainerRNA *)&RNA_ActionConstraint, (ContainerRNA *)&RNA_FollowPathConstraint,
	NULL,
	{(PropertyRNA *)&rna_LockedTrackConstraint_head_tail, (PropertyRNA *)&rna_LockedTrackConstraint_lock_axis}},
	"LockedTrackConstraint", NULL, NULL, 4, "Locked Track Constraint",
	"Point toward the target along the track axis, while locking the other axis",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Action Constraint */
PointerPropertyRNA rna_ActionConstraint_target = {
	{(PropertyRNA *)&rna_ActionConstraint_subtarget, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ActionConstraint_target_get, ActionConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_ActionConstraint_subtarget = {
	{(PropertyRNA *)&rna_ActionConstraint_transform_channel, (PropertyRNA *)&rna_ActionConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ActionConstraint_subtarget_get, ActionConstraint_subtarget_length, ActionConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_ActionConstraint_transform_channel_items[10] = {
	{20, "LOCATION_X", 0, "X Location", ""},
	{21, "LOCATION_Y", 0, "Y Location", ""},
	{22, "LOCATION_Z", 0, "Z Location", ""},
	{0, "ROTATION_X", 0, "X Rotation", ""},
	{1, "ROTATION_Y", 0, "Y Rotation", ""},
	{2, "ROTATION_Z", 0, "Z Rotation", ""},
	{10, "SCALE_X", 0, "X Scale", ""},
	{11, "SCALE_Y", 0, "Y Scale", ""},
	{12, "SCALE_Z", 0, "Z Scale", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ActionConstraint_transform_channel = {
	{(PropertyRNA *)&rna_ActionConstraint_action, (PropertyRNA *)&rna_ActionConstraint_subtarget,
	-1, "transform_channel", 3, "Transform Channel",
	"Transformation channel from the target that is used to key the Action",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ActionConstraint_transform_channel_get, ActionConstraint_transform_channel_set, NULL, NULL, NULL, NULL, rna_ActionConstraint_transform_channel_items, 9, 0
};

PointerPropertyRNA rna_ActionConstraint_action = {
	{(PropertyRNA *)&rna_ActionConstraint_use_bone_object_action, (PropertyRNA *)&rna_ActionConstraint_transform_channel,
	-1, "action", 8388673, "Action",
	"The constraining action",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ActionConstraint_action_get, ActionConstraint_action_set, NULL, rna_Action_id_poll,&RNA_Action
};

BoolPropertyRNA rna_ActionConstraint_use_bone_object_action = {
	{(PropertyRNA *)&rna_ActionConstraint_frame_start, (PropertyRNA *)&rna_ActionConstraint_action,
	-1, "use_bone_object_action", 3, "Object Action",
	"Bones only: apply the object\'s transformation channels of the action to the constrained bone, instead of bone\'s channels",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ActionConstraint_use_bone_object_action_get, ActionConstraint_use_bone_object_action_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ActionConstraint_frame_start = {
	{(PropertyRNA *)&rna_ActionConstraint_frame_end, (PropertyRNA *)&rna_ActionConstraint_use_bone_object_action,
	-1, "frame_start", 8195, "Start Frame",
	"First frame of the Action to use",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bActionConstraint, start), 0, NULL},
	ActionConstraint_frame_start_get, ActionConstraint_frame_start_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

IntPropertyRNA rna_ActionConstraint_frame_end = {
	{(PropertyRNA *)&rna_ActionConstraint_max, (PropertyRNA *)&rna_ActionConstraint_frame_start,
	-1, "frame_end", 8195, "End Frame",
	"Last frame of the Action to use",
	0, "*",
	PROP_INT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bActionConstraint, end), 0, NULL},
	ActionConstraint_frame_end_get, ActionConstraint_frame_end_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

FloatPropertyRNA rna_ActionConstraint_max = {
	{(PropertyRNA *)&rna_ActionConstraint_min, (PropertyRNA *)&rna_ActionConstraint_frame_end,
	-1, "max", 8195, "Maximum",
	"Maximum value for target channel range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bActionConstraint, max), 4, NULL},
	ActionConstraint_max_get, ActionConstraint_max_set, NULL, NULL, rna_ActionConstraint_minmax_range, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ActionConstraint_min = {
	{NULL, (PropertyRNA *)&rna_ActionConstraint_max,
	-1, "min", 8195, "Minimum",
	"Minimum value for target channel range",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bActionConstraint, min), 4, NULL},
	ActionConstraint_min_get, ActionConstraint_min_set, NULL, NULL, rna_ActionConstraint_minmax_range, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ActionConstraint = {
	{(ContainerRNA *)&RNA_CopyScaleConstraint, (ContainerRNA *)&RNA_LockedTrackConstraint,
	NULL,
	{(PropertyRNA *)&rna_ActionConstraint_target, (PropertyRNA *)&rna_ActionConstraint_min}},
	"ActionConstraint", NULL, NULL, 4, "Action Constraint",
	"Map an action to the transform axes of a bone",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Copy Scale Constraint */
PointerPropertyRNA rna_CopyScaleConstraint_target = {
	{(PropertyRNA *)&rna_CopyScaleConstraint_subtarget, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyScaleConstraint_target_get, CopyScaleConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_CopyScaleConstraint_subtarget = {
	{(PropertyRNA *)&rna_CopyScaleConstraint_use_x, (PropertyRNA *)&rna_CopyScaleConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyScaleConstraint_subtarget_get, CopyScaleConstraint_subtarget_length, CopyScaleConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_CopyScaleConstraint_use_x = {
	{(PropertyRNA *)&rna_CopyScaleConstraint_use_y, (PropertyRNA *)&rna_CopyScaleConstraint_subtarget,
	-1, "use_x", 3, "Copy X",
	"Copy the target\'s X scale",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyScaleConstraint_use_x_get, CopyScaleConstraint_use_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyScaleConstraint_use_y = {
	{(PropertyRNA *)&rna_CopyScaleConstraint_use_z, (PropertyRNA *)&rna_CopyScaleConstraint_use_x,
	-1, "use_y", 3, "Copy Y",
	"Copy the target\'s Y scale",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyScaleConstraint_use_y_get, CopyScaleConstraint_use_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyScaleConstraint_use_z = {
	{(PropertyRNA *)&rna_CopyScaleConstraint_use_offset, (PropertyRNA *)&rna_CopyScaleConstraint_use_y,
	-1, "use_z", 3, "Copy Z",
	"Copy the target\'s Z scale",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyScaleConstraint_use_z_get, CopyScaleConstraint_use_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyScaleConstraint_use_offset = {
	{NULL, (PropertyRNA *)&rna_CopyScaleConstraint_use_z,
	-1, "use_offset", 3, "Offset",
	"Add original scale into copied scale",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyScaleConstraint_use_offset_get, CopyScaleConstraint_use_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_CopyScaleConstraint = {
	{(ContainerRNA *)&RNA_MaintainVolumeConstraint, (ContainerRNA *)&RNA_ActionConstraint,
	NULL,
	{(PropertyRNA *)&rna_CopyScaleConstraint_target, (PropertyRNA *)&rna_CopyScaleConstraint_use_offset}},
	"CopyScaleConstraint", NULL, NULL, 4, "Copy Scale Constraint",
	"Copy the scale of the target",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Maintain Volume Constraint */
static EnumPropertyItem rna_MaintainVolumeConstraint_free_axis_items[4] = {
	{0, "SAMEVOL_X", 0, "X", ""},
	{1, "SAMEVOL_Y", 0, "Y", ""},
	{2, "SAMEVOL_Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaintainVolumeConstraint_free_axis = {
	{(PropertyRNA *)&rna_MaintainVolumeConstraint_volume, NULL,
	-1, "free_axis", 3, "Free Axis",
	"The free scaling axis of the object",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	MaintainVolumeConstraint_free_axis_get, MaintainVolumeConstraint_free_axis_set, NULL, NULL, NULL, NULL, rna_MaintainVolumeConstraint_free_axis_items, 3, 0
};

FloatPropertyRNA rna_MaintainVolumeConstraint_volume = {
	{NULL, (PropertyRNA *)&rna_MaintainVolumeConstraint_free_axis,
	-1, "volume", 8195, "Volume",
	"Volume of the bone at rest",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bSameVolumeConstraint, volume), 4, NULL},
	MaintainVolumeConstraint_volume_get, MaintainVolumeConstraint_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 100.0f, 0.0010000000f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MaintainVolumeConstraint = {
	{(ContainerRNA *)&RNA_CopyLocationConstraint, (ContainerRNA *)&RNA_CopyScaleConstraint,
	NULL,
	{(PropertyRNA *)&rna_MaintainVolumeConstraint_free_axis, (PropertyRNA *)&rna_MaintainVolumeConstraint_volume}},
	"MaintainVolumeConstraint", NULL, NULL, 4, "Maintain Volume Constraint",
	"Maintain a constant volume along a single scaling axis",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Copy Location Constraint */
FloatPropertyRNA rna_CopyLocationConstraint_head_tail = {
	{(PropertyRNA *)&rna_CopyLocationConstraint_target, NULL,
	-1, "head_tail", 8195, "Head/Tail",
	"Target along length of bone: Head=0, Tail=1",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bConstraint, headtail), 4, NULL},
	CopyLocationConstraint_head_tail_get, CopyLocationConstraint_head_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_CopyLocationConstraint_target = {
	{(PropertyRNA *)&rna_CopyLocationConstraint_subtarget, (PropertyRNA *)&rna_CopyLocationConstraint_head_tail,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyLocationConstraint_target_get, CopyLocationConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_CopyLocationConstraint_subtarget = {
	{(PropertyRNA *)&rna_CopyLocationConstraint_use_x, (PropertyRNA *)&rna_CopyLocationConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyLocationConstraint_subtarget_get, CopyLocationConstraint_subtarget_length, CopyLocationConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_CopyLocationConstraint_use_x = {
	{(PropertyRNA *)&rna_CopyLocationConstraint_use_y, (PropertyRNA *)&rna_CopyLocationConstraint_subtarget,
	-1, "use_x", 3, "Copy X",
	"Copy the target\'s X location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyLocationConstraint_use_x_get, CopyLocationConstraint_use_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyLocationConstraint_use_y = {
	{(PropertyRNA *)&rna_CopyLocationConstraint_use_z, (PropertyRNA *)&rna_CopyLocationConstraint_use_x,
	-1, "use_y", 3, "Copy Y",
	"Copy the target\'s Y location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyLocationConstraint_use_y_get, CopyLocationConstraint_use_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyLocationConstraint_use_z = {
	{(PropertyRNA *)&rna_CopyLocationConstraint_invert_x, (PropertyRNA *)&rna_CopyLocationConstraint_use_y,
	-1, "use_z", 3, "Copy Z",
	"Copy the target\'s Z location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyLocationConstraint_use_z_get, CopyLocationConstraint_use_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyLocationConstraint_invert_x = {
	{(PropertyRNA *)&rna_CopyLocationConstraint_invert_y, (PropertyRNA *)&rna_CopyLocationConstraint_use_z,
	-1, "invert_x", 3, "Invert X",
	"Invert the X location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyLocationConstraint_invert_x_get, CopyLocationConstraint_invert_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyLocationConstraint_invert_y = {
	{(PropertyRNA *)&rna_CopyLocationConstraint_invert_z, (PropertyRNA *)&rna_CopyLocationConstraint_invert_x,
	-1, "invert_y", 3, "Invert Y",
	"Invert the Y location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyLocationConstraint_invert_y_get, CopyLocationConstraint_invert_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyLocationConstraint_invert_z = {
	{(PropertyRNA *)&rna_CopyLocationConstraint_use_offset, (PropertyRNA *)&rna_CopyLocationConstraint_invert_y,
	-1, "invert_z", 3, "Invert Z",
	"Invert the Z location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyLocationConstraint_invert_z_get, CopyLocationConstraint_invert_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyLocationConstraint_use_offset = {
	{NULL, (PropertyRNA *)&rna_CopyLocationConstraint_invert_z,
	-1, "use_offset", 3, "Offset",
	"Add original location into copied location",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyLocationConstraint_use_offset_get, CopyLocationConstraint_use_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_CopyLocationConstraint = {
	{(ContainerRNA *)&RNA_CopyRotationConstraint, (ContainerRNA *)&RNA_MaintainVolumeConstraint,
	NULL,
	{(PropertyRNA *)&rna_CopyLocationConstraint_head_tail, (PropertyRNA *)&rna_CopyLocationConstraint_use_offset}},
	"CopyLocationConstraint", NULL, NULL, 4, "Copy Location Constraint",
	"Copy the location of the target",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Copy Rotation Constraint */
PointerPropertyRNA rna_CopyRotationConstraint_target = {
	{(PropertyRNA *)&rna_CopyRotationConstraint_subtarget, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyRotationConstraint_target_get, CopyRotationConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_CopyRotationConstraint_subtarget = {
	{(PropertyRNA *)&rna_CopyRotationConstraint_use_x, (PropertyRNA *)&rna_CopyRotationConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyRotationConstraint_subtarget_get, CopyRotationConstraint_subtarget_length, CopyRotationConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_CopyRotationConstraint_use_x = {
	{(PropertyRNA *)&rna_CopyRotationConstraint_use_y, (PropertyRNA *)&rna_CopyRotationConstraint_subtarget,
	-1, "use_x", 3, "Copy X",
	"Copy the target\'s X rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyRotationConstraint_use_x_get, CopyRotationConstraint_use_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyRotationConstraint_use_y = {
	{(PropertyRNA *)&rna_CopyRotationConstraint_use_z, (PropertyRNA *)&rna_CopyRotationConstraint_use_x,
	-1, "use_y", 3, "Copy Y",
	"Copy the target\'s Y rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyRotationConstraint_use_y_get, CopyRotationConstraint_use_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyRotationConstraint_use_z = {
	{(PropertyRNA *)&rna_CopyRotationConstraint_invert_x, (PropertyRNA *)&rna_CopyRotationConstraint_use_y,
	-1, "use_z", 3, "Copy Z",
	"Copy the target\'s Z rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyRotationConstraint_use_z_get, CopyRotationConstraint_use_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyRotationConstraint_invert_x = {
	{(PropertyRNA *)&rna_CopyRotationConstraint_invert_y, (PropertyRNA *)&rna_CopyRotationConstraint_use_z,
	-1, "invert_x", 3, "Invert X",
	"Invert the X rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyRotationConstraint_invert_x_get, CopyRotationConstraint_invert_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyRotationConstraint_invert_y = {
	{(PropertyRNA *)&rna_CopyRotationConstraint_invert_z, (PropertyRNA *)&rna_CopyRotationConstraint_invert_x,
	-1, "invert_y", 3, "Invert Y",
	"Invert the Y rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyRotationConstraint_invert_y_get, CopyRotationConstraint_invert_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyRotationConstraint_invert_z = {
	{(PropertyRNA *)&rna_CopyRotationConstraint_use_offset, (PropertyRNA *)&rna_CopyRotationConstraint_invert_y,
	-1, "invert_z", 3, "Invert Z",
	"Invert the Z rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyRotationConstraint_invert_z_get, CopyRotationConstraint_invert_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_CopyRotationConstraint_use_offset = {
	{NULL, (PropertyRNA *)&rna_CopyRotationConstraint_invert_z,
	-1, "use_offset", 3, "Offset",
	"Add original rotation into copied rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyRotationConstraint_use_offset_get, CopyRotationConstraint_use_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_CopyRotationConstraint = {
	{(ContainerRNA *)&RNA_CopyTransformsConstraint, (ContainerRNA *)&RNA_CopyLocationConstraint,
	NULL,
	{(PropertyRNA *)&rna_CopyRotationConstraint_target, (PropertyRNA *)&rna_CopyRotationConstraint_use_offset}},
	"CopyRotationConstraint", NULL, NULL, 4, "Copy Rotation Constraint",
	"Copy the rotation of the target",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Copy Transforms Constraint */
FloatPropertyRNA rna_CopyTransformsConstraint_head_tail = {
	{(PropertyRNA *)&rna_CopyTransformsConstraint_target, NULL,
	-1, "head_tail", 8195, "Head/Tail",
	"Target along length of bone: Head=0, Tail=1",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bConstraint, headtail), 4, NULL},
	CopyTransformsConstraint_head_tail_get, CopyTransformsConstraint_head_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_CopyTransformsConstraint_target = {
	{(PropertyRNA *)&rna_CopyTransformsConstraint_subtarget, (PropertyRNA *)&rna_CopyTransformsConstraint_head_tail,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyTransformsConstraint_target_get, CopyTransformsConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_CopyTransformsConstraint_subtarget = {
	{NULL, (PropertyRNA *)&rna_CopyTransformsConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CopyTransformsConstraint_subtarget_get, CopyTransformsConstraint_subtarget_length, CopyTransformsConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_CopyTransformsConstraint = {
	{(ContainerRNA *)&RNA_FloorConstraint, (ContainerRNA *)&RNA_CopyRotationConstraint,
	NULL,
	{(PropertyRNA *)&rna_CopyTransformsConstraint_head_tail, (PropertyRNA *)&rna_CopyTransformsConstraint_subtarget}},
	"CopyTransformsConstraint", NULL, NULL, 4, "Copy Transforms Constraint",
	"Copy all the transforms of the target",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Floor Constraint */
PointerPropertyRNA rna_FloorConstraint_target = {
	{(PropertyRNA *)&rna_FloorConstraint_subtarget, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FloorConstraint_target_get, FloorConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_FloorConstraint_subtarget = {
	{(PropertyRNA *)&rna_FloorConstraint_floor_location, (PropertyRNA *)&rna_FloorConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FloorConstraint_subtarget_get, FloorConstraint_subtarget_length, FloorConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_FloorConstraint_floor_location_items[7] = {
	{0, "FLOOR_X", 0, "X", ""},
	{1, "FLOOR_Y", 0, "Y", ""},
	{2, "FLOOR_Z", 0, "Z", ""},
	{3, "FLOOR_NEGATIVE_X", 0, "-X", ""},
	{4, "FLOOR_NEGATIVE_Y", 0, "-Y", ""},
	{5, "FLOOR_NEGATIVE_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FloorConstraint_floor_location = {
	{(PropertyRNA *)&rna_FloorConstraint_use_sticky, (PropertyRNA *)&rna_FloorConstraint_subtarget,
	-1, "floor_location", 3, "Floor Location",
	"Location of target that object will not pass through",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FloorConstraint_floor_location_get, FloorConstraint_floor_location_set, NULL, NULL, NULL, NULL, rna_FloorConstraint_floor_location_items, 6, 0
};

BoolPropertyRNA rna_FloorConstraint_use_sticky = {
	{(PropertyRNA *)&rna_FloorConstraint_use_rotation, (PropertyRNA *)&rna_FloorConstraint_floor_location,
	-1, "use_sticky", 3, "Sticky",
	"Immobilize object while constrained",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FloorConstraint_use_sticky_get, FloorConstraint_use_sticky_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FloorConstraint_use_rotation = {
	{(PropertyRNA *)&rna_FloorConstraint_offset, (PropertyRNA *)&rna_FloorConstraint_use_sticky,
	-1, "use_rotation", 3, "Use Rotation",
	"Use the target\'s rotation to determine floor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FloorConstraint_use_rotation_get, FloorConstraint_use_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FloorConstraint_offset = {
	{NULL, (PropertyRNA *)&rna_FloorConstraint_use_rotation,
	-1, "offset", 8195, "Offset",
	"Offset of floor from object origin",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bMinMaxConstraint, offset), 4, NULL},
	FloorConstraint_offset_get, FloorConstraint_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -100.0f, 100.0f, -1000.0f, 1000.0f, 1.0f, -1, 0.0f, NULL
};

StructRNA RNA_FloorConstraint = {
	{(ContainerRNA *)&RNA_TrackToConstraint, (ContainerRNA *)&RNA_CopyTransformsConstraint,
	NULL,
	{(PropertyRNA *)&rna_FloorConstraint_target, (PropertyRNA *)&rna_FloorConstraint_offset}},
	"FloorConstraint", NULL, NULL, 4, "Floor Constraint",
	"Use the target object for location limitation",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Track To Constraint */
FloatPropertyRNA rna_TrackToConstraint_head_tail = {
	{(PropertyRNA *)&rna_TrackToConstraint_target, NULL,
	-1, "head_tail", 8195, "Head/Tail",
	"Target along length of bone: Head=0, Tail=1",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bConstraint, headtail), 4, NULL},
	TrackToConstraint_head_tail_get, TrackToConstraint_head_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_TrackToConstraint_target = {
	{(PropertyRNA *)&rna_TrackToConstraint_subtarget, (PropertyRNA *)&rna_TrackToConstraint_head_tail,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TrackToConstraint_target_get, TrackToConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_TrackToConstraint_subtarget = {
	{(PropertyRNA *)&rna_TrackToConstraint_track_axis, (PropertyRNA *)&rna_TrackToConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TrackToConstraint_subtarget_get, TrackToConstraint_subtarget_length, TrackToConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_TrackToConstraint_track_axis_items[7] = {
	{0, "TRACK_X", 0, "X", ""},
	{1, "TRACK_Y", 0, "Y", ""},
	{2, "TRACK_Z", 0, "Z", ""},
	{3, "TRACK_NEGATIVE_X", 0, "-X", ""},
	{4, "TRACK_NEGATIVE_Y", 0, "-Y", ""},
	{5, "TRACK_NEGATIVE_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TrackToConstraint_track_axis = {
	{(PropertyRNA *)&rna_TrackToConstraint_up_axis, (PropertyRNA *)&rna_TrackToConstraint_subtarget,
	-1, "track_axis", 3, "Track Axis",
	"Axis that points to the target object",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TrackToConstraint_track_axis_get, TrackToConstraint_track_axis_set, NULL, NULL, NULL, NULL, rna_TrackToConstraint_track_axis_items, 6, 0
};

static EnumPropertyItem rna_TrackToConstraint_up_axis_items[4] = {
	{0, "UP_X", 0, "X", ""},
	{1, "UP_Y", 0, "Y", ""},
	{2, "UP_Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TrackToConstraint_up_axis = {
	{(PropertyRNA *)&rna_TrackToConstraint_use_target_z, (PropertyRNA *)&rna_TrackToConstraint_track_axis,
	-1, "up_axis", 3, "Up Axis",
	"Axis that points upward",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TrackToConstraint_up_axis_get, TrackToConstraint_up_axis_set, NULL, NULL, NULL, NULL, rna_TrackToConstraint_up_axis_items, 3, 0
};

BoolPropertyRNA rna_TrackToConstraint_use_target_z = {
	{NULL, (PropertyRNA *)&rna_TrackToConstraint_up_axis,
	-1, "use_target_z", 3, "Target Z",
	"Target\'s Z axis, not World Z axis, will constraint the Up direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TrackToConstraint_use_target_z_get, TrackToConstraint_use_target_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_TrackToConstraint = {
	{(ContainerRNA *)&RNA_KinematicConstraint, (ContainerRNA *)&RNA_FloorConstraint,
	NULL,
	{(PropertyRNA *)&rna_TrackToConstraint_head_tail, (PropertyRNA *)&rna_TrackToConstraint_use_target_z}},
	"TrackToConstraint", NULL, NULL, 4, "Track To Constraint",
	"Aim the constrained object toward the target",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Kinematic Constraint */
PointerPropertyRNA rna_KinematicConstraint_target = {
	{(PropertyRNA *)&rna_KinematicConstraint_subtarget, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_target_get, KinematicConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_KinematicConstraint_subtarget = {
	{(PropertyRNA *)&rna_KinematicConstraint_iterations, (PropertyRNA *)&rna_KinematicConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_subtarget_get, KinematicConstraint_subtarget_length, KinematicConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

IntPropertyRNA rna_KinematicConstraint_iterations = {
	{(PropertyRNA *)&rna_KinematicConstraint_pole_target, (PropertyRNA *)&rna_KinematicConstraint_subtarget,
	-1, "iterations", 8195, "Iterations",
	"Maximum number of solving iterations",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bKinematicConstraint, iterations), 1, NULL},
	KinematicConstraint_iterations_get, KinematicConstraint_iterations_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, 10000, 1, 0, NULL
};

PointerPropertyRNA rna_KinematicConstraint_pole_target = {
	{(PropertyRNA *)&rna_KinematicConstraint_pole_subtarget, (PropertyRNA *)&rna_KinematicConstraint_iterations,
	-1, "pole_target", 8388609, "Pole Target",
	"Object for pole rotation",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_pole_target_get, KinematicConstraint_pole_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_KinematicConstraint_pole_subtarget = {
	{(PropertyRNA *)&rna_KinematicConstraint_pole_angle, (PropertyRNA *)&rna_KinematicConstraint_pole_target,
	-1, "pole_subtarget", 262145, "Pole Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_pole_subtarget_get, KinematicConstraint_pole_subtarget_length, KinematicConstraint_pole_subtarget_set, NULL, NULL, NULL, 64, ""
};

FloatPropertyRNA rna_KinematicConstraint_pole_angle = {
	{(PropertyRNA *)&rna_KinematicConstraint_weight, (PropertyRNA *)&rna_KinematicConstraint_pole_subtarget,
	-1, "pole_angle", 8195, "Pole Angle",
	"Pole rotation offset",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bKinematicConstraint, poleangle), 4, NULL},
	KinematicConstraint_pole_angle_get, KinematicConstraint_pole_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -3.1415927410f, 3.1415927410f, 10.0f, 4, 0.0f, NULL
};

FloatPropertyRNA rna_KinematicConstraint_weight = {
	{(PropertyRNA *)&rna_KinematicConstraint_orient_weight, (PropertyRNA *)&rna_KinematicConstraint_pole_angle,
	-1, "weight", 8195, "Weight",
	"For Tree-IK: Weight of position control for this target",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bKinematicConstraint, weight), 4, NULL},
	KinematicConstraint_weight_get, KinematicConstraint_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_KinematicConstraint_orient_weight = {
	{(PropertyRNA *)&rna_KinematicConstraint_chain_count, (PropertyRNA *)&rna_KinematicConstraint_weight,
	-1, "orient_weight", 8195, "Orientation Weight",
	"For Tree-IK: Weight of orientation control for this target",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bKinematicConstraint, orientweight), 4, NULL},
	KinematicConstraint_orient_weight_get, KinematicConstraint_orient_weight_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_KinematicConstraint_chain_count = {
	{(PropertyRNA *)&rna_KinematicConstraint_use_tail, (PropertyRNA *)&rna_KinematicConstraint_orient_weight,
	-1, "chain_count", 8195, "Chain Length",
	"How many bones are included in the IK effect - 0 uses all bones",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	offsetof(bKinematicConstraint, rootbone), 1, NULL},
	KinematicConstraint_chain_count_get, KinematicConstraint_chain_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

BoolPropertyRNA rna_KinematicConstraint_use_tail = {
	{(PropertyRNA *)&rna_KinematicConstraint_reference_axis, (PropertyRNA *)&rna_KinematicConstraint_chain_count,
	-1, "use_tail", 3, "Use Tail",
	"Include bone\'s tail as last element in chain",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_use_tail_get, KinematicConstraint_use_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KinematicConstraint_reference_axis_items[3] = {
	{0, "BONE", 0, "Bone", ""},
	{16384, "TARGET", 0, "Target", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KinematicConstraint_reference_axis = {
	{(PropertyRNA *)&rna_KinematicConstraint_use_location, (PropertyRNA *)&rna_KinematicConstraint_use_tail,
	-1, "reference_axis", 3, "Axis Reference",
	"Constraint axis Lock options relative to Bone or Target reference",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_reference_axis_get, KinematicConstraint_reference_axis_set, NULL, NULL, NULL, NULL, rna_KinematicConstraint_reference_axis_items, 2, 0
};

BoolPropertyRNA rna_KinematicConstraint_use_location = {
	{(PropertyRNA *)&rna_KinematicConstraint_lock_location_x, (PropertyRNA *)&rna_KinematicConstraint_reference_axis,
	-1, "use_location", 3, "Position",
	"Chain follows position of target",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_use_location_get, KinematicConstraint_use_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KinematicConstraint_lock_location_x = {
	{(PropertyRNA *)&rna_KinematicConstraint_lock_location_y, (PropertyRNA *)&rna_KinematicConstraint_use_location,
	-1, "lock_location_x", 3, "Lock X Pos",
	"Constraint position along X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85196800, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_lock_location_x_get, KinematicConstraint_lock_location_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KinematicConstraint_lock_location_y = {
	{(PropertyRNA *)&rna_KinematicConstraint_lock_location_z, (PropertyRNA *)&rna_KinematicConstraint_lock_location_x,
	-1, "lock_location_y", 3, "Lock Y Pos",
	"Constraint position along Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85196800, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_lock_location_y_get, KinematicConstraint_lock_location_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KinematicConstraint_lock_location_z = {
	{(PropertyRNA *)&rna_KinematicConstraint_use_rotation, (PropertyRNA *)&rna_KinematicConstraint_lock_location_y,
	-1, "lock_location_z", 3, "Lock Z Pos",
	"Constraint position along Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85196800, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_lock_location_z_get, KinematicConstraint_lock_location_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KinematicConstraint_use_rotation = {
	{(PropertyRNA *)&rna_KinematicConstraint_lock_rotation_x, (PropertyRNA *)&rna_KinematicConstraint_lock_location_z,
	-1, "use_rotation", 3, "Rotation",
	"Chain follows rotation of target",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_use_rotation_get, KinematicConstraint_use_rotation_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KinematicConstraint_lock_rotation_x = {
	{(PropertyRNA *)&rna_KinematicConstraint_lock_rotation_y, (PropertyRNA *)&rna_KinematicConstraint_use_rotation,
	-1, "lock_rotation_x", 3, "Lock X Rot",
	"Constraint rotation along X axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85196800, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_lock_rotation_x_get, KinematicConstraint_lock_rotation_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KinematicConstraint_lock_rotation_y = {
	{(PropertyRNA *)&rna_KinematicConstraint_lock_rotation_z, (PropertyRNA *)&rna_KinematicConstraint_lock_rotation_x,
	-1, "lock_rotation_y", 3, "Lock Y Rot",
	"Constraint rotation along Y axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85196800, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_lock_rotation_y_get, KinematicConstraint_lock_rotation_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KinematicConstraint_lock_rotation_z = {
	{(PropertyRNA *)&rna_KinematicConstraint_use_stretch, (PropertyRNA *)&rna_KinematicConstraint_lock_rotation_y,
	-1, "lock_rotation_z", 3, "Lock Z Rot",
	"Constraint rotation along Z axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85196800, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_lock_rotation_z_get, KinematicConstraint_lock_rotation_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_KinematicConstraint_use_stretch = {
	{(PropertyRNA *)&rna_KinematicConstraint_ik_type, (PropertyRNA *)&rna_KinematicConstraint_lock_rotation_z,
	-1, "use_stretch", 3, "Stretch",
	"Enable IK Stretching",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_use_stretch_get, KinematicConstraint_use_stretch_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KinematicConstraint_ik_type_items[3] = {
	{0, "COPY_POSE", 0, "Copy Pose", ""},
	{1, "DISTANCE", 0, "Distance", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KinematicConstraint_ik_type = {
	{(PropertyRNA *)&rna_KinematicConstraint_limit_mode, (PropertyRNA *)&rna_KinematicConstraint_use_stretch,
	-1, "ik_type", 3, "IK Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_ik_type_get, KinematicConstraint_ik_type_set, NULL, NULL, NULL, NULL, rna_KinematicConstraint_ik_type_items, 2, 0
};

static EnumPropertyItem rna_KinematicConstraint_limit_mode_items[4] = {
	{0, "LIMITDIST_INSIDE", 0, "Inside", "The object is constrained inside a virtual sphere around the target object, with a radius defined by the limit distance"},
	{1, "LIMITDIST_OUTSIDE", 0, "Outside", "The object is constrained outside a virtual sphere around the target object, with a radius defined by the limit distance"},
	{2, "LIMITDIST_ONSURFACE", 0, "On Surface", "The object is constrained on the surface of a virtual sphere around the target object, with a radius defined by the limit distance"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KinematicConstraint_limit_mode = {
	{(PropertyRNA *)&rna_KinematicConstraint_distance, (PropertyRNA *)&rna_KinematicConstraint_ik_type,
	-1, "limit_mode", 3, "Limit Mode",
	"Distances in relation to sphere of influence to allow",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	KinematicConstraint_limit_mode_get, KinematicConstraint_limit_mode_set, NULL, NULL, NULL, NULL, rna_KinematicConstraint_limit_mode_items, 3, 0
};

FloatPropertyRNA rna_KinematicConstraint_distance = {
	{NULL, (PropertyRNA *)&rna_KinematicConstraint_limit_mode,
	-1, "distance", 8195, "Distance",
	"Radius of limiting sphere",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bKinematicConstraint, dist), 4, NULL},
	KinematicConstraint_distance_get, KinematicConstraint_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_KinematicConstraint = {
	{(ContainerRNA *)&RNA_RigidBodyJointConstraint, (ContainerRNA *)&RNA_TrackToConstraint,
	NULL,
	{(PropertyRNA *)&rna_KinematicConstraint_target, (PropertyRNA *)&rna_KinematicConstraint_distance}},
	"KinematicConstraint", NULL, NULL, 4, "Kinematic Constraint",
	"Inverse Kinematics",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Rigid Body Joint Constraint */
PointerPropertyRNA rna_RigidBodyJointConstraint_target = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_child, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_target_get, RigidBodyJointConstraint_target_set, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_RigidBodyJointConstraint_child = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_pivot_type, (PropertyRNA *)&rna_RigidBodyJointConstraint_target,
	-1, "child", 8388609, "Child Object",
	"Child object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_child_get, RigidBodyJointConstraint_child_set, NULL, NULL,&RNA_Object
};

static EnumPropertyItem rna_RigidBodyJointConstraint_pivot_type_items[5] = {
	{1, "BALL", 0, "Ball", "Allow rotations around all axes"},
	{2, "HINGE", 0, "Hinge", "Work in one plane, allow rotations around one axis only"},
	{4, "CONE_TWIST", 0, "Cone Twist", "Allow rotations around all axes with limits for the cone and twist axes"},
	{12, "GENERIC_6_DOF", 0, "Generic 6 DoF", "No constraints by default, limits can be set individually"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RigidBodyJointConstraint_pivot_type = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_pivot_x, (PropertyRNA *)&rna_RigidBodyJointConstraint_child,
	-1, "pivot_type", 3, "Pivot Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_pivot_type_get, RigidBodyJointConstraint_pivot_type_set, NULL, NULL, NULL, NULL, rna_RigidBodyJointConstraint_pivot_type_items, 4, 1
};

FloatPropertyRNA rna_RigidBodyJointConstraint_pivot_x = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_pivot_y, (PropertyRNA *)&rna_RigidBodyJointConstraint_pivot_type,
	-1, "pivot_x", 8195, "Pivot X",
	"Offset pivot on X",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, pivX), 4, NULL},
	RigidBodyJointConstraint_pivot_x_get, RigidBodyJointConstraint_pivot_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_pivot_y = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_pivot_z, (PropertyRNA *)&rna_RigidBodyJointConstraint_pivot_x,
	-1, "pivot_y", 8195, "Pivot Y",
	"Offset pivot on Y",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, pivY), 4, NULL},
	RigidBodyJointConstraint_pivot_y_get, RigidBodyJointConstraint_pivot_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_pivot_z = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_axis_x, (PropertyRNA *)&rna_RigidBodyJointConstraint_pivot_y,
	-1, "pivot_z", 8195, "Pivot Z",
	"Offset pivot on Z",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, pivZ), 4, NULL},
	RigidBodyJointConstraint_pivot_z_get, RigidBodyJointConstraint_pivot_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_axis_x = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_axis_y, (PropertyRNA *)&rna_RigidBodyJointConstraint_pivot_z,
	-1, "axis_x", 8195, "Axis X",
	"Rotate pivot on X axis",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, axX), 4, NULL},
	RigidBodyJointConstraint_axis_x_get, RigidBodyJointConstraint_axis_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_axis_y = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_axis_z, (PropertyRNA *)&rna_RigidBodyJointConstraint_axis_x,
	-1, "axis_y", 8195, "Axis Y",
	"Rotate pivot on Y axis",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, axY), 4, NULL},
	RigidBodyJointConstraint_axis_y_get, RigidBodyJointConstraint_axis_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_axis_z = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_use_linked_collision, (PropertyRNA *)&rna_RigidBodyJointConstraint_axis_y,
	-1, "axis_z", 8195, "Axis Z",
	"Rotate pivot on Z axis",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, axZ), 4, NULL},
	RigidBodyJointConstraint_axis_z_get, RigidBodyJointConstraint_axis_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_RigidBodyJointConstraint_use_linked_collision = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_show_pivot, (PropertyRNA *)&rna_RigidBodyJointConstraint_axis_z,
	-1, "use_linked_collision", 3, "Disable Linked Collision",
	"Disable collision between linked bodies",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_use_linked_collision_get, RigidBodyJointConstraint_use_linked_collision_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyJointConstraint_show_pivot = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_min_x, (PropertyRNA *)&rna_RigidBodyJointConstraint_use_linked_collision,
	-1, "show_pivot", 3, "Draw Pivot",
	"Display the pivot point and rotation in 3D view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_show_pivot_get, RigidBodyJointConstraint_show_pivot_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_min_x = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_min_y, (PropertyRNA *)&rna_RigidBodyJointConstraint_show_pivot,
	-1, "limit_min_x", 8195, "Minimum Limit X",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, minLimit[0]), 4, NULL},
	RigidBodyJointConstraint_limit_min_x_get, RigidBodyJointConstraint_limit_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_min_y = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_min_z, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_min_x,
	-1, "limit_min_y", 8195, "Minimum Limit Y",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, minLimit[1]), 4, NULL},
	RigidBodyJointConstraint_limit_min_y_get, RigidBodyJointConstraint_limit_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_min_z = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_max_x, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_min_y,
	-1, "limit_min_z", 8195, "Minimum Limit Z",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, minLimit[2]), 4, NULL},
	RigidBodyJointConstraint_limit_min_z_get, RigidBodyJointConstraint_limit_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_max_x = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_max_y, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_min_z,
	-1, "limit_max_x", 8195, "Maximum Limit X",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, maxLimit[0]), 4, NULL},
	RigidBodyJointConstraint_limit_max_x_get, RigidBodyJointConstraint_limit_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_max_y = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_max_z, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_max_x,
	-1, "limit_max_y", 8195, "Maximum Limit Y",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, maxLimit[1]), 4, NULL},
	RigidBodyJointConstraint_limit_max_y_get, RigidBodyJointConstraint_limit_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_max_z = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_min_x, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_max_y,
	-1, "limit_max_z", 8195, "Maximum Limit Z",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, maxLimit[2]), 4, NULL},
	RigidBodyJointConstraint_limit_max_z_get, RigidBodyJointConstraint_limit_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_min_x = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_min_y, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_max_z,
	-1, "limit_angle_min_x", 8195, "Minimum Angular Limit X",
	"",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, minLimit[3]), 4, NULL},
	RigidBodyJointConstraint_limit_angle_min_x_get, RigidBodyJointConstraint_limit_angle_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_min_y = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_min_z, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_min_x,
	-1, "limit_angle_min_y", 8195, "Minimum Angular Limit Y",
	"",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, minLimit[4]), 4, NULL},
	RigidBodyJointConstraint_limit_angle_min_y_get, RigidBodyJointConstraint_limit_angle_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_min_z = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_max_x, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_min_y,
	-1, "limit_angle_min_z", 8195, "Minimum Angular Limit Z",
	"",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, minLimit[5]), 4, NULL},
	RigidBodyJointConstraint_limit_angle_min_z_get, RigidBodyJointConstraint_limit_angle_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_max_x = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_max_y, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_min_z,
	-1, "limit_angle_max_x", 8195, "Maximum Angular Limit X",
	"",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, maxLimit[3]), 4, NULL},
	RigidBodyJointConstraint_limit_angle_max_x_get, RigidBodyJointConstraint_limit_angle_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_max_y = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_max_z, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_max_x,
	-1, "limit_angle_max_y", 8195, "Maximum Angular Limit Y",
	"",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, maxLimit[4]), 4, NULL},
	RigidBodyJointConstraint_limit_angle_max_y_get, RigidBodyJointConstraint_limit_angle_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_RigidBodyJointConstraint_limit_angle_max_z = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_use_limit_x, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_max_y,
	-1, "limit_angle_max_z", 8195, "Maximum Angular Limit Z",
	"",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bRigidBodyJointConstraint, maxLimit[5]), 4, NULL},
	RigidBodyJointConstraint_limit_angle_max_z_get, RigidBodyJointConstraint_limit_angle_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -6.2831854820f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_RigidBodyJointConstraint_use_limit_x = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_use_limit_y, (PropertyRNA *)&rna_RigidBodyJointConstraint_limit_angle_max_z,
	-1, "use_limit_x", 3, "Limit X",
	"Use minimum/maximum X limit",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_use_limit_x_get, RigidBodyJointConstraint_use_limit_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyJointConstraint_use_limit_y = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_use_limit_z, (PropertyRNA *)&rna_RigidBodyJointConstraint_use_limit_x,
	-1, "use_limit_y", 3, "Limit Y",
	"Use minimum/maximum y limit",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_use_limit_y_get, RigidBodyJointConstraint_use_limit_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyJointConstraint_use_limit_z = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_use_angular_limit_x, (PropertyRNA *)&rna_RigidBodyJointConstraint_use_limit_y,
	-1, "use_limit_z", 3, "Limit Z",
	"Use minimum/maximum z limit",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_use_limit_z_get, RigidBodyJointConstraint_use_limit_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyJointConstraint_use_angular_limit_x = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_use_angular_limit_y, (PropertyRNA *)&rna_RigidBodyJointConstraint_use_limit_z,
	-1, "use_angular_limit_x", 3, "Angular X Limit",
	"Use minimum/maximum X angular limit",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_use_angular_limit_x_get, RigidBodyJointConstraint_use_angular_limit_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyJointConstraint_use_angular_limit_y = {
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_use_angular_limit_z, (PropertyRNA *)&rna_RigidBodyJointConstraint_use_angular_limit_x,
	-1, "use_angular_limit_y", 3, "Angular Y Limit",
	"Use minimum/maximum Y angular limit",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_use_angular_limit_y_get, RigidBodyJointConstraint_use_angular_limit_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_RigidBodyJointConstraint_use_angular_limit_z = {
	{NULL, (PropertyRNA *)&rna_RigidBodyJointConstraint_use_angular_limit_y,
	-1, "use_angular_limit_z", 3, "Angular Z Limit",
	"Use minimum/maximum Z angular limit",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	RigidBodyJointConstraint_use_angular_limit_z_get, RigidBodyJointConstraint_use_angular_limit_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_RigidBodyJointConstraint = {
	{(ContainerRNA *)&RNA_ClampToConstraint, (ContainerRNA *)&RNA_KinematicConstraint,
	NULL,
	{(PropertyRNA *)&rna_RigidBodyJointConstraint_target, (PropertyRNA *)&rna_RigidBodyJointConstraint_use_angular_limit_z}},
	"RigidBodyJointConstraint", NULL, NULL, 4, "Rigid Body Joint Constraint",
	"For use with the Game Engine",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Clamp To Constraint */
PointerPropertyRNA rna_ClampToConstraint_target = {
	{(PropertyRNA *)&rna_ClampToConstraint_main_axis, NULL,
	-1, "target", 8388609, "Target",
	"Target Object (Curves only)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ClampToConstraint_target_get, ClampToConstraint_target_set, NULL, rna_Curve_object_poll,&RNA_Object
};

static EnumPropertyItem rna_ClampToConstraint_main_axis_items[5] = {
	{0, "CLAMPTO_AUTO", 0, "Auto", ""},
	{1, "CLAMPTO_X", 0, "X", ""},
	{2, "CLAMPTO_Y", 0, "Y", ""},
	{3, "CLAMPTO_Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ClampToConstraint_main_axis = {
	{(PropertyRNA *)&rna_ClampToConstraint_use_cyclic, (PropertyRNA *)&rna_ClampToConstraint_target,
	-1, "main_axis", 3, "Main Axis",
	"Main axis of movement",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ClampToConstraint_main_axis_get, ClampToConstraint_main_axis_set, NULL, NULL, NULL, NULL, rna_ClampToConstraint_main_axis_items, 4, 0
};

BoolPropertyRNA rna_ClampToConstraint_use_cyclic = {
	{NULL, (PropertyRNA *)&rna_ClampToConstraint_main_axis,
	-1, "use_cyclic", 3, "Cyclic",
	"Treat curve as cyclic curve (no clamping to curve bounding box)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ClampToConstraint_use_cyclic_get, ClampToConstraint_use_cyclic_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ClampToConstraint = {
	{(ContainerRNA *)&RNA_LimitDistanceConstraint, (ContainerRNA *)&RNA_RigidBodyJointConstraint,
	NULL,
	{(PropertyRNA *)&rna_ClampToConstraint_target, (PropertyRNA *)&rna_ClampToConstraint_use_cyclic}},
	"ClampToConstraint", NULL, NULL, 4, "Clamp To Constraint",
	"Constrain an object\'s location to the nearest point along the target path",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Limit Distance Constraint */
FloatPropertyRNA rna_LimitDistanceConstraint_head_tail = {
	{(PropertyRNA *)&rna_LimitDistanceConstraint_target, NULL,
	-1, "head_tail", 8195, "Head/Tail",
	"Target along length of bone: Head=0, Tail=1",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bConstraint, headtail), 4, NULL},
	LimitDistanceConstraint_head_tail_get, LimitDistanceConstraint_head_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_LimitDistanceConstraint_target = {
	{(PropertyRNA *)&rna_LimitDistanceConstraint_subtarget, (PropertyRNA *)&rna_LimitDistanceConstraint_head_tail,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitDistanceConstraint_target_get, LimitDistanceConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_LimitDistanceConstraint_subtarget = {
	{(PropertyRNA *)&rna_LimitDistanceConstraint_distance, (PropertyRNA *)&rna_LimitDistanceConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitDistanceConstraint_subtarget_get, LimitDistanceConstraint_subtarget_length, LimitDistanceConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

FloatPropertyRNA rna_LimitDistanceConstraint_distance = {
	{(PropertyRNA *)&rna_LimitDistanceConstraint_limit_mode, (PropertyRNA *)&rna_LimitDistanceConstraint_subtarget,
	-1, "distance", 8195, "Distance",
	"Radius of limiting sphere",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bDistLimitConstraint, dist), 4, NULL},
	LimitDistanceConstraint_distance_get, LimitDistanceConstraint_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_LimitDistanceConstraint_limit_mode_items[4] = {
	{0, "LIMITDIST_INSIDE", 0, "Inside", "The object is constrained inside a virtual sphere around the target object, with a radius defined by the limit distance"},
	{1, "LIMITDIST_OUTSIDE", 0, "Outside", "The object is constrained outside a virtual sphere around the target object, with a radius defined by the limit distance"},
	{2, "LIMITDIST_ONSURFACE", 0, "On Surface", "The object is constrained on the surface of a virtual sphere around the target object, with a radius defined by the limit distance"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_LimitDistanceConstraint_limit_mode = {
	{(PropertyRNA *)&rna_LimitDistanceConstraint_use_transform_limit, (PropertyRNA *)&rna_LimitDistanceConstraint_distance,
	-1, "limit_mode", 3, "Limit Mode",
	"Distances in relation to sphere of influence to allow",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitDistanceConstraint_limit_mode_get, LimitDistanceConstraint_limit_mode_set, NULL, NULL, NULL, NULL, rna_LimitDistanceConstraint_limit_mode_items, 3, 0
};

BoolPropertyRNA rna_LimitDistanceConstraint_use_transform_limit = {
	{NULL, (PropertyRNA *)&rna_LimitDistanceConstraint_limit_mode,
	-1, "use_transform_limit", 3, "For Transform",
	"Transforms are affected by this constraint as well",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitDistanceConstraint_use_transform_limit_get, LimitDistanceConstraint_use_transform_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_LimitDistanceConstraint = {
	{(ContainerRNA *)&RNA_LimitScaleConstraint, (ContainerRNA *)&RNA_ClampToConstraint,
	NULL,
	{(PropertyRNA *)&rna_LimitDistanceConstraint_head_tail, (PropertyRNA *)&rna_LimitDistanceConstraint_use_transform_limit}},
	"LimitDistanceConstraint", NULL, NULL, 4, "Limit Distance Constraint",
	"Limit the distance from target object",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Limit Size Constraint */
BoolPropertyRNA rna_LimitScaleConstraint_use_min_x = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_use_min_y, NULL,
	-1, "use_min_x", 3, "Minimum X",
	"Use the minimum X value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitScaleConstraint_use_min_x_get, LimitScaleConstraint_use_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitScaleConstraint_use_min_y = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_use_min_z, (PropertyRNA *)&rna_LimitScaleConstraint_use_min_x,
	-1, "use_min_y", 3, "Minimum Y",
	"Use the minimum Y value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitScaleConstraint_use_min_y_get, LimitScaleConstraint_use_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitScaleConstraint_use_min_z = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_use_max_x, (PropertyRNA *)&rna_LimitScaleConstraint_use_min_y,
	-1, "use_min_z", 3, "Minimum Z",
	"Use the minimum Z value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitScaleConstraint_use_min_z_get, LimitScaleConstraint_use_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitScaleConstraint_use_max_x = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_use_max_y, (PropertyRNA *)&rna_LimitScaleConstraint_use_min_z,
	-1, "use_max_x", 3, "Maximum X",
	"Use the maximum X value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitScaleConstraint_use_max_x_get, LimitScaleConstraint_use_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitScaleConstraint_use_max_y = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_use_max_z, (PropertyRNA *)&rna_LimitScaleConstraint_use_max_x,
	-1, "use_max_y", 3, "Maximum Y",
	"Use the maximum Y value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitScaleConstraint_use_max_y_get, LimitScaleConstraint_use_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitScaleConstraint_use_max_z = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_min_x, (PropertyRNA *)&rna_LimitScaleConstraint_use_max_y,
	-1, "use_max_z", 3, "Maximum Z",
	"Use the maximum Z value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitScaleConstraint_use_max_z_get, LimitScaleConstraint_use_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LimitScaleConstraint_min_x = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_min_y, (PropertyRNA *)&rna_LimitScaleConstraint_use_max_z,
	-1, "min_x", 8195, "Minimum X",
	"Lowest X value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bSizeLimitConstraint, xmin), 4, NULL},
	LimitScaleConstraint_min_x_get, LimitScaleConstraint_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitScaleConstraint_min_y = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_min_z, (PropertyRNA *)&rna_LimitScaleConstraint_min_x,
	-1, "min_y", 8195, "Minimum Y",
	"Lowest Y value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bSizeLimitConstraint, ymin), 4, NULL},
	LimitScaleConstraint_min_y_get, LimitScaleConstraint_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitScaleConstraint_min_z = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_max_x, (PropertyRNA *)&rna_LimitScaleConstraint_min_y,
	-1, "min_z", 8195, "Minimum Z",
	"Lowest Z value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bSizeLimitConstraint, zmin), 4, NULL},
	LimitScaleConstraint_min_z_get, LimitScaleConstraint_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitScaleConstraint_max_x = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_max_y, (PropertyRNA *)&rna_LimitScaleConstraint_min_z,
	-1, "max_x", 8195, "Maximum X",
	"Highest X value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bSizeLimitConstraint, xmax), 4, NULL},
	LimitScaleConstraint_max_x_get, LimitScaleConstraint_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitScaleConstraint_max_y = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_max_z, (PropertyRNA *)&rna_LimitScaleConstraint_max_x,
	-1, "max_y", 8195, "Maximum Y",
	"Highest Y value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bSizeLimitConstraint, ymax), 4, NULL},
	LimitScaleConstraint_max_y_get, LimitScaleConstraint_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitScaleConstraint_max_z = {
	{(PropertyRNA *)&rna_LimitScaleConstraint_use_transform_limit, (PropertyRNA *)&rna_LimitScaleConstraint_max_y,
	-1, "max_z", 8195, "Maximum Z",
	"Highest Z value to allow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bSizeLimitConstraint, zmax), 4, NULL},
	LimitScaleConstraint_max_z_get, LimitScaleConstraint_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LimitScaleConstraint_use_transform_limit = {
	{NULL, (PropertyRNA *)&rna_LimitScaleConstraint_max_z,
	-1, "use_transform_limit", 3, "For Transform",
	"Transforms are affected by this constraint as well",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitScaleConstraint_use_transform_limit_get, LimitScaleConstraint_use_transform_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_LimitScaleConstraint = {
	{(ContainerRNA *)&RNA_LimitRotationConstraint, (ContainerRNA *)&RNA_LimitDistanceConstraint,
	NULL,
	{(PropertyRNA *)&rna_LimitScaleConstraint_use_min_x, (PropertyRNA *)&rna_LimitScaleConstraint_use_transform_limit}},
	"LimitScaleConstraint", NULL, NULL, 4, "Limit Size Constraint",
	"Limit the scaling of the constrained object",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Limit Rotation Constraint */
BoolPropertyRNA rna_LimitRotationConstraint_use_limit_x = {
	{(PropertyRNA *)&rna_LimitRotationConstraint_use_limit_y, NULL,
	-1, "use_limit_x", 3, "Limit X",
	"Use the minimum X value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitRotationConstraint_use_limit_x_get, LimitRotationConstraint_use_limit_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitRotationConstraint_use_limit_y = {
	{(PropertyRNA *)&rna_LimitRotationConstraint_use_limit_z, (PropertyRNA *)&rna_LimitRotationConstraint_use_limit_x,
	-1, "use_limit_y", 3, "Limit Y",
	"Use the minimum Y value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitRotationConstraint_use_limit_y_get, LimitRotationConstraint_use_limit_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitRotationConstraint_use_limit_z = {
	{(PropertyRNA *)&rna_LimitRotationConstraint_min_x, (PropertyRNA *)&rna_LimitRotationConstraint_use_limit_y,
	-1, "use_limit_z", 3, "Limit Z",
	"Use the minimum Z value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitRotationConstraint_use_limit_z_get, LimitRotationConstraint_use_limit_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LimitRotationConstraint_min_x = {
	{(PropertyRNA *)&rna_LimitRotationConstraint_min_y, (PropertyRNA *)&rna_LimitRotationConstraint_use_limit_z,
	-1, "min_x", 8195, "Minimum X",
	"Lowest X value to allow",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRotLimitConstraint, xmin), 4, NULL},
	LimitRotationConstraint_min_x_get, LimitRotationConstraint_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitRotationConstraint_min_y = {
	{(PropertyRNA *)&rna_LimitRotationConstraint_min_z, (PropertyRNA *)&rna_LimitRotationConstraint_min_x,
	-1, "min_y", 8195, "Minimum Y",
	"Lowest Y value to allow",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRotLimitConstraint, ymin), 4, NULL},
	LimitRotationConstraint_min_y_get, LimitRotationConstraint_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitRotationConstraint_min_z = {
	{(PropertyRNA *)&rna_LimitRotationConstraint_max_x, (PropertyRNA *)&rna_LimitRotationConstraint_min_y,
	-1, "min_z", 8195, "Minimum Z",
	"Lowest Z value to allow",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRotLimitConstraint, zmin), 4, NULL},
	LimitRotationConstraint_min_z_get, LimitRotationConstraint_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitRotationConstraint_max_x = {
	{(PropertyRNA *)&rna_LimitRotationConstraint_max_y, (PropertyRNA *)&rna_LimitRotationConstraint_min_z,
	-1, "max_x", 8195, "Maximum X",
	"Highest X value to allow",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRotLimitConstraint, xmax), 4, NULL},
	LimitRotationConstraint_max_x_get, LimitRotationConstraint_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitRotationConstraint_max_y = {
	{(PropertyRNA *)&rna_LimitRotationConstraint_max_z, (PropertyRNA *)&rna_LimitRotationConstraint_max_x,
	-1, "max_y", 8195, "Maximum Y",
	"Highest Y value to allow",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRotLimitConstraint, ymax), 4, NULL},
	LimitRotationConstraint_max_y_get, LimitRotationConstraint_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitRotationConstraint_max_z = {
	{(PropertyRNA *)&rna_LimitRotationConstraint_use_transform_limit, (PropertyRNA *)&rna_LimitRotationConstraint_max_y,
	-1, "max_z", 8195, "Maximum Z",
	"Highest Z value to allow",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bRotLimitConstraint, zmax), 4, NULL},
	LimitRotationConstraint_max_z_get, LimitRotationConstraint_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LimitRotationConstraint_use_transform_limit = {
	{NULL, (PropertyRNA *)&rna_LimitRotationConstraint_max_z,
	-1, "use_transform_limit", 3, "For Transform",
	"Transforms are affected by this constraint as well",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitRotationConstraint_use_transform_limit_get, LimitRotationConstraint_use_transform_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_LimitRotationConstraint = {
	{(ContainerRNA *)&RNA_LimitLocationConstraint, (ContainerRNA *)&RNA_LimitScaleConstraint,
	NULL,
	{(PropertyRNA *)&rna_LimitRotationConstraint_use_limit_x, (PropertyRNA *)&rna_LimitRotationConstraint_use_transform_limit}},
	"LimitRotationConstraint", NULL, NULL, 4, "Limit Rotation Constraint",
	"Limit the rotation of the constrained object",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Limit Location Constraint */
BoolPropertyRNA rna_LimitLocationConstraint_use_min_x = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_use_min_y, NULL,
	-1, "use_min_x", 3, "Minimum X",
	"Use the minimum X value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitLocationConstraint_use_min_x_get, LimitLocationConstraint_use_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitLocationConstraint_use_min_y = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_use_min_z, (PropertyRNA *)&rna_LimitLocationConstraint_use_min_x,
	-1, "use_min_y", 3, "Minimum Y",
	"Use the minimum Y value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitLocationConstraint_use_min_y_get, LimitLocationConstraint_use_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitLocationConstraint_use_min_z = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_use_max_x, (PropertyRNA *)&rna_LimitLocationConstraint_use_min_y,
	-1, "use_min_z", 3, "Minimum Z",
	"Use the minimum Z value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitLocationConstraint_use_min_z_get, LimitLocationConstraint_use_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitLocationConstraint_use_max_x = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_use_max_y, (PropertyRNA *)&rna_LimitLocationConstraint_use_min_z,
	-1, "use_max_x", 3, "Maximum X",
	"Use the maximum X value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitLocationConstraint_use_max_x_get, LimitLocationConstraint_use_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitLocationConstraint_use_max_y = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_use_max_z, (PropertyRNA *)&rna_LimitLocationConstraint_use_max_x,
	-1, "use_max_y", 3, "Maximum Y",
	"Use the maximum Y value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitLocationConstraint_use_max_y_get, LimitLocationConstraint_use_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_LimitLocationConstraint_use_max_z = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_min_x, (PropertyRNA *)&rna_LimitLocationConstraint_use_max_y,
	-1, "use_max_z", 3, "Maximum Z",
	"Use the maximum Z value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitLocationConstraint_use_max_z_get, LimitLocationConstraint_use_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_LimitLocationConstraint_min_x = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_min_y, (PropertyRNA *)&rna_LimitLocationConstraint_use_max_z,
	-1, "min_x", 8195, "Minimum X",
	"Lowest X value to allow",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bLocLimitConstraint, xmin), 4, NULL},
	LimitLocationConstraint_min_x_get, LimitLocationConstraint_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitLocationConstraint_min_y = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_min_z, (PropertyRNA *)&rna_LimitLocationConstraint_min_x,
	-1, "min_y", 8195, "Minimum Y",
	"Lowest Y value to allow",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bLocLimitConstraint, ymin), 4, NULL},
	LimitLocationConstraint_min_y_get, LimitLocationConstraint_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitLocationConstraint_min_z = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_max_x, (PropertyRNA *)&rna_LimitLocationConstraint_min_y,
	-1, "min_z", 8195, "Minimum Z",
	"Lowest Z value to allow",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bLocLimitConstraint, zmin), 4, NULL},
	LimitLocationConstraint_min_z_get, LimitLocationConstraint_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitLocationConstraint_max_x = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_max_y, (PropertyRNA *)&rna_LimitLocationConstraint_min_z,
	-1, "max_x", 8195, "Maximum X",
	"Highest X value to allow",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bLocLimitConstraint, xmax), 4, NULL},
	LimitLocationConstraint_max_x_get, LimitLocationConstraint_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitLocationConstraint_max_y = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_max_z, (PropertyRNA *)&rna_LimitLocationConstraint_max_x,
	-1, "max_y", 8195, "Maximum Y",
	"Highest Y value to allow",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bLocLimitConstraint, ymax), 4, NULL},
	LimitLocationConstraint_max_y_get, LimitLocationConstraint_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_LimitLocationConstraint_max_z = {
	{(PropertyRNA *)&rna_LimitLocationConstraint_use_transform_limit, (PropertyRNA *)&rna_LimitLocationConstraint_max_y,
	-1, "max_z", 8195, "Maximum Z",
	"Highest Z value to allow",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bLocLimitConstraint, zmax), 4, NULL},
	LimitLocationConstraint_max_z_get, LimitLocationConstraint_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_LimitLocationConstraint_use_transform_limit = {
	{NULL, (PropertyRNA *)&rna_LimitLocationConstraint_max_z,
	-1, "use_transform_limit", 3, "For Transform",
	"Transforms are affected by this constraint as well",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	LimitLocationConstraint_use_transform_limit_get, LimitLocationConstraint_use_transform_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_LimitLocationConstraint = {
	{(ContainerRNA *)&RNA_TransformConstraint, (ContainerRNA *)&RNA_LimitRotationConstraint,
	NULL,
	{(PropertyRNA *)&rna_LimitLocationConstraint_use_min_x, (PropertyRNA *)&rna_LimitLocationConstraint_use_transform_limit}},
	"LimitLocationConstraint", NULL, NULL, 4, "Limit Location Constraint",
	"Limit the location of the constrained object",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Transformation Constraint */
PointerPropertyRNA rna_TransformConstraint_target = {
	{(PropertyRNA *)&rna_TransformConstraint_subtarget, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TransformConstraint_target_get, TransformConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_TransformConstraint_subtarget = {
	{(PropertyRNA *)&rna_TransformConstraint_map_from, (PropertyRNA *)&rna_TransformConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TransformConstraint_subtarget_get, TransformConstraint_subtarget_length, TransformConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_TransformConstraint_map_from_items[4] = {
	{0, "LOCATION", 0, "Loc", ""},
	{1, "ROTATION", 0, "Rot", ""},
	{2, "SCALE", 0, "Scale", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TransformConstraint_map_from = {
	{(PropertyRNA *)&rna_TransformConstraint_map_to, (PropertyRNA *)&rna_TransformConstraint_subtarget,
	-1, "map_from", 3, "Map From",
	"The transformation type to use from the target",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TransformConstraint_map_from_get, TransformConstraint_map_from_set, NULL, NULL, NULL, NULL, rna_TransformConstraint_map_from_items, 3, 0
};

static EnumPropertyItem rna_TransformConstraint_map_to_items[4] = {
	{0, "LOCATION", 0, "Loc", ""},
	{1, "ROTATION", 0, "Rot", ""},
	{2, "SCALE", 0, "Scale", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TransformConstraint_map_to = {
	{(PropertyRNA *)&rna_TransformConstraint_map_to_x_from, (PropertyRNA *)&rna_TransformConstraint_map_from,
	-1, "map_to", 3, "Map To",
	"The transformation type to affect of the constrained object",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TransformConstraint_map_to_get, TransformConstraint_map_to_set, NULL, NULL, NULL, NULL, rna_TransformConstraint_map_to_items, 3, 0
};

static EnumPropertyItem rna_TransformConstraint_map_to_x_from_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TransformConstraint_map_to_x_from = {
	{(PropertyRNA *)&rna_TransformConstraint_map_to_y_from, (PropertyRNA *)&rna_TransformConstraint_map_to,
	-1, "map_to_x_from", 3, "Map To X From",
	"The source axis constrained object\'s X axis uses",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TransformConstraint_map_to_x_from_get, TransformConstraint_map_to_x_from_set, NULL, NULL, NULL, NULL, rna_TransformConstraint_map_to_x_from_items, 3, 0
};

static EnumPropertyItem rna_TransformConstraint_map_to_y_from_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TransformConstraint_map_to_y_from = {
	{(PropertyRNA *)&rna_TransformConstraint_map_to_z_from, (PropertyRNA *)&rna_TransformConstraint_map_to_x_from,
	-1, "map_to_y_from", 3, "Map To Y From",
	"The source axis constrained object\'s Y axis uses",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TransformConstraint_map_to_y_from_get, TransformConstraint_map_to_y_from_set, NULL, NULL, NULL, NULL, rna_TransformConstraint_map_to_y_from_items, 3, 0
};

static EnumPropertyItem rna_TransformConstraint_map_to_z_from_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TransformConstraint_map_to_z_from = {
	{(PropertyRNA *)&rna_TransformConstraint_use_motion_extrapolate, (PropertyRNA *)&rna_TransformConstraint_map_to_y_from,
	-1, "map_to_z_from", 3, "Map To Z From",
	"The source axis constrained object\'s Z axis uses",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TransformConstraint_map_to_z_from_get, TransformConstraint_map_to_z_from_set, NULL, NULL, NULL, NULL, rna_TransformConstraint_map_to_z_from_items, 3, 0
};

BoolPropertyRNA rna_TransformConstraint_use_motion_extrapolate = {
	{(PropertyRNA *)&rna_TransformConstraint_from_min_x, (PropertyRNA *)&rna_TransformConstraint_map_to_z_from,
	-1, "use_motion_extrapolate", 3, "Extrapolate Motion",
	"Extrapolate ranges",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	TransformConstraint_use_motion_extrapolate_get, TransformConstraint_use_motion_extrapolate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_min_x = {
	{(PropertyRNA *)&rna_TransformConstraint_from_min_y, (PropertyRNA *)&rna_TransformConstraint_use_motion_extrapolate,
	-1, "from_min_x", 8195, "From Minimum X",
	"Bottom range of X axis source motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_min[0]), 4, NULL},
	TransformConstraint_from_min_x_get, TransformConstraint_from_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_min_y = {
	{(PropertyRNA *)&rna_TransformConstraint_from_min_z, (PropertyRNA *)&rna_TransformConstraint_from_min_x,
	-1, "from_min_y", 8195, "From Minimum Y",
	"Bottom range of Y axis source motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_min[1]), 4, NULL},
	TransformConstraint_from_min_y_get, TransformConstraint_from_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_min_z = {
	{(PropertyRNA *)&rna_TransformConstraint_from_max_x, (PropertyRNA *)&rna_TransformConstraint_from_min_y,
	-1, "from_min_z", 8195, "From Minimum Z",
	"Bottom range of Z axis source motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_min[2]), 4, NULL},
	TransformConstraint_from_min_z_get, TransformConstraint_from_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_max_x = {
	{(PropertyRNA *)&rna_TransformConstraint_from_max_y, (PropertyRNA *)&rna_TransformConstraint_from_min_z,
	-1, "from_max_x", 8195, "From Maximum X",
	"Top range of X axis source motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_max[0]), 4, NULL},
	TransformConstraint_from_max_x_get, TransformConstraint_from_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_max_y = {
	{(PropertyRNA *)&rna_TransformConstraint_from_max_z, (PropertyRNA *)&rna_TransformConstraint_from_max_x,
	-1, "from_max_y", 8195, "From Maximum Y",
	"Top range of Y axis source motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_max[1]), 4, NULL},
	TransformConstraint_from_max_y_get, TransformConstraint_from_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_max_z = {
	{(PropertyRNA *)&rna_TransformConstraint_to_min_x, (PropertyRNA *)&rna_TransformConstraint_from_max_y,
	-1, "from_max_z", 8195, "From Maximum Z",
	"Top range of Z axis source motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_max[2]), 4, NULL},
	TransformConstraint_from_max_z_get, TransformConstraint_from_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_min_x = {
	{(PropertyRNA *)&rna_TransformConstraint_to_min_y, (PropertyRNA *)&rna_TransformConstraint_from_max_z,
	-1, "to_min_x", 8195, "To Minimum X",
	"Bottom range of X axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_min[0]), 4, NULL},
	TransformConstraint_to_min_x_get, TransformConstraint_to_min_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_min_y = {
	{(PropertyRNA *)&rna_TransformConstraint_to_min_z, (PropertyRNA *)&rna_TransformConstraint_to_min_x,
	-1, "to_min_y", 8195, "To Minimum Y",
	"Bottom range of Y axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_min[1]), 4, NULL},
	TransformConstraint_to_min_y_get, TransformConstraint_to_min_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_min_z = {
	{(PropertyRNA *)&rna_TransformConstraint_to_max_x, (PropertyRNA *)&rna_TransformConstraint_to_min_y,
	-1, "to_min_z", 8195, "To Minimum Z",
	"Bottom range of Z axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_min[2]), 4, NULL},
	TransformConstraint_to_min_z_get, TransformConstraint_to_min_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_max_x = {
	{(PropertyRNA *)&rna_TransformConstraint_to_max_y, (PropertyRNA *)&rna_TransformConstraint_to_min_z,
	-1, "to_max_x", 8195, "To Maximum X",
	"Top range of X axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_max[0]), 4, NULL},
	TransformConstraint_to_max_x_get, TransformConstraint_to_max_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_max_y = {
	{(PropertyRNA *)&rna_TransformConstraint_to_max_z, (PropertyRNA *)&rna_TransformConstraint_to_max_x,
	-1, "to_max_y", 8195, "To Maximum Y",
	"Top range of Y axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_max[1]), 4, NULL},
	TransformConstraint_to_max_y_get, TransformConstraint_to_max_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_max_z = {
	{(PropertyRNA *)&rna_TransformConstraint_from_min_x_rot, (PropertyRNA *)&rna_TransformConstraint_to_max_y,
	-1, "to_max_z", 8195, "To Maximum Z",
	"Top range of Z axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_max[2]), 4, NULL},
	TransformConstraint_to_max_z_get, TransformConstraint_to_max_z_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_min_x_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_from_min_y_rot, (PropertyRNA *)&rna_TransformConstraint_to_max_z,
	-1, "from_min_x_rot", 8195, "From Minimum X",
	"Bottom range of X axis source motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_min_rot[0]), 4, NULL},
	TransformConstraint_from_min_x_rot_get, TransformConstraint_from_min_x_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_min_y_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_from_min_z_rot, (PropertyRNA *)&rna_TransformConstraint_from_min_x_rot,
	-1, "from_min_y_rot", 8195, "From Minimum Y",
	"Bottom range of Y axis source motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_min_rot[1]), 4, NULL},
	TransformConstraint_from_min_y_rot_get, TransformConstraint_from_min_y_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_min_z_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_from_max_x_rot, (PropertyRNA *)&rna_TransformConstraint_from_min_y_rot,
	-1, "from_min_z_rot", 8195, "From Minimum Z",
	"Bottom range of Z axis source motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_min_rot[2]), 4, NULL},
	TransformConstraint_from_min_z_rot_get, TransformConstraint_from_min_z_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_max_x_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_from_max_y_rot, (PropertyRNA *)&rna_TransformConstraint_from_min_z_rot,
	-1, "from_max_x_rot", 8195, "From Maximum X",
	"Top range of X axis source motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_max_rot[0]), 4, NULL},
	TransformConstraint_from_max_x_rot_get, TransformConstraint_from_max_x_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_max_y_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_from_max_z_rot, (PropertyRNA *)&rna_TransformConstraint_from_max_x_rot,
	-1, "from_max_y_rot", 8195, "From Maximum Y",
	"Top range of Y axis source motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_max_rot[1]), 4, NULL},
	TransformConstraint_from_max_y_rot_get, TransformConstraint_from_max_y_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_max_z_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_to_min_x_rot, (PropertyRNA *)&rna_TransformConstraint_from_max_y_rot,
	-1, "from_max_z_rot", 8195, "From Maximum Z",
	"Top range of Z axis source motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_max_rot[2]), 4, NULL},
	TransformConstraint_from_max_z_rot_get, TransformConstraint_from_max_z_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_min_x_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_to_min_y_rot, (PropertyRNA *)&rna_TransformConstraint_from_max_z_rot,
	-1, "to_min_x_rot", 8195, "To Minimum X",
	"Bottom range of X axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_min_rot[0]), 4, NULL},
	TransformConstraint_to_min_x_rot_get, TransformConstraint_to_min_x_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_min_y_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_to_min_z_rot, (PropertyRNA *)&rna_TransformConstraint_to_min_x_rot,
	-1, "to_min_y_rot", 8195, "To Minimum Y",
	"Bottom range of Y axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_min_rot[1]), 4, NULL},
	TransformConstraint_to_min_y_rot_get, TransformConstraint_to_min_y_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_min_z_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_to_max_x_rot, (PropertyRNA *)&rna_TransformConstraint_to_min_y_rot,
	-1, "to_min_z_rot", 8195, "To Minimum Z",
	"Bottom range of Z axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_min_rot[2]), 4, NULL},
	TransformConstraint_to_min_z_rot_get, TransformConstraint_to_min_z_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_max_x_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_to_max_y_rot, (PropertyRNA *)&rna_TransformConstraint_to_min_z_rot,
	-1, "to_max_x_rot", 8195, "To Maximum X",
	"Top range of X axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_max_rot[0]), 4, NULL},
	TransformConstraint_to_max_x_rot_get, TransformConstraint_to_max_x_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_max_y_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_to_max_z_rot, (PropertyRNA *)&rna_TransformConstraint_to_max_x_rot,
	-1, "to_max_y_rot", 8195, "To Maximum Y",
	"Top range of Y axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_max_rot[1]), 4, NULL},
	TransformConstraint_to_max_y_rot_get, TransformConstraint_to_max_y_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_max_z_rot = {
	{(PropertyRNA *)&rna_TransformConstraint_from_min_x_scale, (PropertyRNA *)&rna_TransformConstraint_to_max_y_rot,
	-1, "to_max_z_rot", 8195, "To Maximum Z",
	"Top range of Z axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_ANGLE | PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_max_rot[2]), 4, NULL},
	TransformConstraint_to_max_z_rot_get, TransformConstraint_to_max_z_rot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -3.1415927410f, 3.1415927410f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_min_x_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_from_min_y_scale, (PropertyRNA *)&rna_TransformConstraint_to_max_z_rot,
	-1, "from_min_x_scale", 8195, "From Minimum X",
	"Bottom range of X axis source motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_min_scale[0]), 4, NULL},
	TransformConstraint_from_min_x_scale_get, TransformConstraint_from_min_x_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_min_y_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_from_min_z_scale, (PropertyRNA *)&rna_TransformConstraint_from_min_x_scale,
	-1, "from_min_y_scale", 8195, "From Minimum Y",
	"Bottom range of Y axis source motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_min_scale[1]), 4, NULL},
	TransformConstraint_from_min_y_scale_get, TransformConstraint_from_min_y_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_min_z_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_from_max_x_scale, (PropertyRNA *)&rna_TransformConstraint_from_min_y_scale,
	-1, "from_min_z_scale", 8195, "From Minimum Z",
	"Bottom range of Z axis source motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_min_scale[2]), 4, NULL},
	TransformConstraint_from_min_z_scale_get, TransformConstraint_from_min_z_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_max_x_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_from_max_y_scale, (PropertyRNA *)&rna_TransformConstraint_from_min_z_scale,
	-1, "from_max_x_scale", 8195, "From Maximum X",
	"Top range of X axis source motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_max_scale[0]), 4, NULL},
	TransformConstraint_from_max_x_scale_get, TransformConstraint_from_max_x_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_max_y_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_from_max_z_scale, (PropertyRNA *)&rna_TransformConstraint_from_max_x_scale,
	-1, "from_max_y_scale", 8195, "From Maximum Y",
	"Top range of Y axis source motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_max_scale[1]), 4, NULL},
	TransformConstraint_from_max_y_scale_get, TransformConstraint_from_max_y_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_from_max_z_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_to_min_x_scale, (PropertyRNA *)&rna_TransformConstraint_from_max_y_scale,
	-1, "from_max_z_scale", 8195, "From Maximum Z",
	"Top range of Z axis source motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, from_max_scale[2]), 4, NULL},
	TransformConstraint_from_max_z_scale_get, TransformConstraint_from_max_z_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_min_x_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_to_min_y_scale, (PropertyRNA *)&rna_TransformConstraint_from_max_z_scale,
	-1, "to_min_x_scale", 8195, "To Minimum X",
	"Bottom range of X axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_min_scale[0]), 4, NULL},
	TransformConstraint_to_min_x_scale_get, TransformConstraint_to_min_x_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_min_y_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_to_min_z_scale, (PropertyRNA *)&rna_TransformConstraint_to_min_x_scale,
	-1, "to_min_y_scale", 8195, "To Minimum Y",
	"Bottom range of Y axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_min_scale[1]), 4, NULL},
	TransformConstraint_to_min_y_scale_get, TransformConstraint_to_min_y_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_min_z_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_to_max_x_scale, (PropertyRNA *)&rna_TransformConstraint_to_min_y_scale,
	-1, "to_min_z_scale", 8195, "To Minimum Z",
	"Bottom range of Z axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_min_scale[2]), 4, NULL},
	TransformConstraint_to_min_z_scale_get, TransformConstraint_to_min_z_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_max_x_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_to_max_y_scale, (PropertyRNA *)&rna_TransformConstraint_to_min_z_scale,
	-1, "to_max_x_scale", 8195, "To Maximum X",
	"Top range of X axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_max_scale[0]), 4, NULL},
	TransformConstraint_to_max_x_scale_get, TransformConstraint_to_max_x_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_max_y_scale = {
	{(PropertyRNA *)&rna_TransformConstraint_to_max_z_scale, (PropertyRNA *)&rna_TransformConstraint_to_max_x_scale,
	-1, "to_max_y_scale", 8195, "To Maximum Y",
	"Top range of Y axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_max_scale[1]), 4, NULL},
	TransformConstraint_to_max_y_scale_get, TransformConstraint_to_max_y_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TransformConstraint_to_max_z_scale = {
	{NULL, (PropertyRNA *)&rna_TransformConstraint_to_max_y_scale,
	-1, "to_max_z_scale", 8195, "To Maximum Z",
	"Top range of Z axis destination motion",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bTransformConstraint, to_max_scale[2]), 4, NULL},
	TransformConstraint_to_max_z_scale_get, TransformConstraint_to_max_z_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0f, 1000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_TransformConstraint = {
	{(ContainerRNA *)&RNA_ShrinkwrapConstraint, (ContainerRNA *)&RNA_LimitLocationConstraint,
	NULL,
	{(PropertyRNA *)&rna_TransformConstraint_target, (PropertyRNA *)&rna_TransformConstraint_to_max_z_scale}},
	"TransformConstraint", NULL, NULL, 4, "Transformation Constraint",
	"Map transformations of the target to the object",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Shrinkwrap Constraint */
PointerPropertyRNA rna_ShrinkwrapConstraint_target = {
	{(PropertyRNA *)&rna_ShrinkwrapConstraint_shrinkwrap_type, NULL,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapConstraint_target_get, ShrinkwrapConstraint_target_set, NULL, rna_Mesh_object_poll,&RNA_Object
};

static EnumPropertyItem rna_ShrinkwrapConstraint_shrinkwrap_type_items[4] = {
	{0, "NEAREST_SURFACE", 0, "Nearest Surface Point", "Shrink the location to the nearest target surface"},
	{1, "PROJECT", 0, "Project", "Shrink the location to the nearest target surface along a given axis"},
	{2, "NEAREST_VERTEX", 0, "Nearest Vertex", "Shrink the location to the nearest target vertex"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShrinkwrapConstraint_shrinkwrap_type = {
	{(PropertyRNA *)&rna_ShrinkwrapConstraint_distance, (PropertyRNA *)&rna_ShrinkwrapConstraint_target,
	-1, "shrinkwrap_type", 3, "Shrinkwrap Type",
	"Select type of shrinkwrap algorithm for target position",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapConstraint_shrinkwrap_type_get, ShrinkwrapConstraint_shrinkwrap_type_set, NULL, NULL, NULL, NULL, rna_ShrinkwrapConstraint_shrinkwrap_type_items, 3, 0
};

FloatPropertyRNA rna_ShrinkwrapConstraint_distance = {
	{(PropertyRNA *)&rna_ShrinkwrapConstraint_project_axis, (PropertyRNA *)&rna_ShrinkwrapConstraint_shrinkwrap_type,
	-1, "distance", 8195, "Distance",
	"Distance to Target",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bShrinkwrapConstraint, dist), 4, NULL},
	ShrinkwrapConstraint_distance_get, ShrinkwrapConstraint_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_ShrinkwrapConstraint_project_axis_items[7] = {
	{0, "POS_X", 0, "+X", ""},
	{1, "POS_Y", 0, "+Y", ""},
	{2, "POS_Z", 0, "+Z", ""},
	{3, "NEG_X", 0, "-X", ""},
	{4, "NEG_Y", 0, "-Y", ""},
	{5, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShrinkwrapConstraint_project_axis = {
	{(PropertyRNA *)&rna_ShrinkwrapConstraint_project_axis_space, (PropertyRNA *)&rna_ShrinkwrapConstraint_distance,
	-1, "project_axis", 3, "Project Axis",
	"Axis constrain to",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapConstraint_project_axis_get, ShrinkwrapConstraint_project_axis_set, NULL, NULL, NULL, NULL, rna_ShrinkwrapConstraint_project_axis_items, 6, 0
};

static EnumPropertyItem rna_ShrinkwrapConstraint_project_axis_space_items[5] = {
	{0, "WORLD", 0, "World Space", "The constraint is applied relative to the world coordinate system"},
	{2, "POSE", 0, "Pose Space", "The constraint is applied in Pose Space, the object transformation is ignored"},
	{3, "LOCAL_WITH_PARENT", 0, "Local With Parent", "The constraint is applied relative to the local coordinate system of the object, with the parent transformation added"},
	{1, "LOCAL", 0, "Local Space", "The constraint is applied relative to the local coordinate system of the object"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShrinkwrapConstraint_project_axis_space = {
	{(PropertyRNA *)&rna_ShrinkwrapConstraint_project_limit, (PropertyRNA *)&rna_ShrinkwrapConstraint_project_axis,
	-1, "project_axis_space", 3, "Axis Space",
	"Space for the projection axis",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShrinkwrapConstraint_project_axis_space_get, ShrinkwrapConstraint_project_axis_space_set, rna_Constraint_owner_space_itemf, NULL, NULL, NULL, rna_ShrinkwrapConstraint_project_axis_space_items, 4, 0
};

FloatPropertyRNA rna_ShrinkwrapConstraint_project_limit = {
	{NULL, (PropertyRNA *)&rna_ShrinkwrapConstraint_project_axis_space,
	-1, "project_limit", 8195, "Project Distance",
	"Limit the distance used for projection (zero disables)",
	0, "*",
	PROP_FLOAT, PROP_DISTANCE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bShrinkwrapConstraint, projLimit), 4, NULL},
	ShrinkwrapConstraint_project_limit_get, ShrinkwrapConstraint_project_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ShrinkwrapConstraint = {
	{(ContainerRNA *)&RNA_DampedTrackConstraint, (ContainerRNA *)&RNA_TransformConstraint,
	NULL,
	{(PropertyRNA *)&rna_ShrinkwrapConstraint_target, (PropertyRNA *)&rna_ShrinkwrapConstraint_project_limit}},
	"ShrinkwrapConstraint", NULL, NULL, 4, "Shrinkwrap Constraint",
	"Create constraint-based shrinkwrap relationship",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Damped Track Constraint */
FloatPropertyRNA rna_DampedTrackConstraint_head_tail = {
	{(PropertyRNA *)&rna_DampedTrackConstraint_target, NULL,
	-1, "head_tail", 8195, "Head/Tail",
	"Target along length of bone: Head=0, Tail=1",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bConstraint, headtail), 4, NULL},
	DampedTrackConstraint_head_tail_get, DampedTrackConstraint_head_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_DampedTrackConstraint_target = {
	{(PropertyRNA *)&rna_DampedTrackConstraint_subtarget, (PropertyRNA *)&rna_DampedTrackConstraint_head_tail,
	-1, "target", 8388609, "Target",
	"Target Object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	DampedTrackConstraint_target_get, DampedTrackConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_DampedTrackConstraint_subtarget = {
	{(PropertyRNA *)&rna_DampedTrackConstraint_track_axis, (PropertyRNA *)&rna_DampedTrackConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	DampedTrackConstraint_subtarget_get, DampedTrackConstraint_subtarget_length, DampedTrackConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

static EnumPropertyItem rna_DampedTrackConstraint_track_axis_items[7] = {
	{0, "TRACK_X", 0, "X", ""},
	{1, "TRACK_Y", 0, "Y", ""},
	{2, "TRACK_Z", 0, "Z", ""},
	{3, "TRACK_NEGATIVE_X", 0, "-X", ""},
	{4, "TRACK_NEGATIVE_Y", 0, "-Y", ""},
	{5, "TRACK_NEGATIVE_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DampedTrackConstraint_track_axis = {
	{NULL, (PropertyRNA *)&rna_DampedTrackConstraint_subtarget,
	-1, "track_axis", 3, "Track Axis",
	"Axis that points to the target object",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	DampedTrackConstraint_track_axis_get, DampedTrackConstraint_track_axis_set, NULL, NULL, NULL, NULL, rna_DampedTrackConstraint_track_axis_items, 6, 0
};

StructRNA RNA_DampedTrackConstraint = {
	{(ContainerRNA *)&RNA_SplineIKConstraint, (ContainerRNA *)&RNA_ShrinkwrapConstraint,
	NULL,
	{(PropertyRNA *)&rna_DampedTrackConstraint_head_tail, (PropertyRNA *)&rna_DampedTrackConstraint_track_axis}},
	"DampedTrackConstraint", NULL, NULL, 4, "Damped Track Constraint",
	"Point toward target by taking the shortest rotation path",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Spline IK Constraint */
PointerPropertyRNA rna_SplineIKConstraint_target = {
	{(PropertyRNA *)&rna_SplineIKConstraint_chain_count, NULL,
	-1, "target", 8388609, "Target",
	"Curve that controls this relationship",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	SplineIKConstraint_target_get, SplineIKConstraint_target_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_SplineIKConstraint_chain_count = {
	{(PropertyRNA *)&rna_SplineIKConstraint_joint_bindings, (PropertyRNA *)&rna_SplineIKConstraint_target,
	-1, "chain_count", 8195, "Chain Length",
	"How many bones are included in the chain",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	offsetof(bSplineIKConstraint, chainlen), 1, NULL},
	SplineIKConstraint_chain_count_get, SplineIKConstraint_chain_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 255, 1, 255, 1, 0, NULL
};

static float rna_SplineIKConstraint_joint_bindings_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SplineIKConstraint_joint_bindings = {
	{(PropertyRNA *)&rna_SplineIKConstraint_use_chain_offset, (PropertyRNA *)&rna_SplineIKConstraint_chain_count,
	-1, "joint_bindings", 131075, "Joint Bindings",
	"(EXPERIENCED USERS ONLY) The relative positions of the joints along the chain, as percentages",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, rna_SplineIKConstraint_joint_bindings_get_length, 1, {32, 0, 0}, 32,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, SplineIKConstraint_joint_bindings_get, SplineIKConstraint_joint_bindings_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_SplineIKConstraint_joint_bindings_default
};

BoolPropertyRNA rna_SplineIKConstraint_use_chain_offset = {
	{(PropertyRNA *)&rna_SplineIKConstraint_use_even_divisions, (PropertyRNA *)&rna_SplineIKConstraint_joint_bindings,
	-1, "use_chain_offset", 3, "Chain Offset",
	"Offset the entire chain relative to the root joint",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	SplineIKConstraint_use_chain_offset_get, SplineIKConstraint_use_chain_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SplineIKConstraint_use_even_divisions = {
	{(PropertyRNA *)&rna_SplineIKConstraint_use_y_stretch, (PropertyRNA *)&rna_SplineIKConstraint_use_chain_offset,
	-1, "use_even_divisions", 3, "Even Divisions",
	"Ignore the relative lengths of the bones when fitting to the curve",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	SplineIKConstraint_use_even_divisions_get, SplineIKConstraint_use_even_divisions_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SplineIKConstraint_use_y_stretch = {
	{(PropertyRNA *)&rna_SplineIKConstraint_use_curve_radius, (PropertyRNA *)&rna_SplineIKConstraint_use_even_divisions,
	-1, "use_y_stretch", 3, "Y Stretch",
	"Stretch the Y axis of the bones to fit the curve",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	SplineIKConstraint_use_y_stretch_get, SplineIKConstraint_use_y_stretch_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_SplineIKConstraint_use_curve_radius = {
	{(PropertyRNA *)&rna_SplineIKConstraint_xz_scale_mode, (PropertyRNA *)&rna_SplineIKConstraint_use_y_stretch,
	-1, "use_curve_radius", 3, "Use Curve Radius",
	"Average radius of the endpoints is used to tweak the X and Z Scaling of the bones, on top of XZ Scale mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	SplineIKConstraint_use_curve_radius_get, SplineIKConstraint_use_curve_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_SplineIKConstraint_xz_scale_mode_items[4] = {
	{0, "NONE", 0, "None", "Don\'t scale the X and Z axes (Default)"},
	{1, "BONE_ORIGINAL", 0, "Bone Original", "Use the original scaling of the bones"},
	{2, "VOLUME_PRESERVE", 0, "Volume Preservation", "Scale of the X and Z axes is the inverse of the Y-Scale"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SplineIKConstraint_xz_scale_mode = {
	{NULL, (PropertyRNA *)&rna_SplineIKConstraint_use_curve_radius,
	-1, "xz_scale_mode", 3, "XZ Scale Mode",
	"Method used for determining the scaling of the X and Z axes of the bones",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	SplineIKConstraint_xz_scale_mode_get, SplineIKConstraint_xz_scale_mode_set, NULL, NULL, NULL, NULL, rna_SplineIKConstraint_xz_scale_mode_items, 3, 0
};

StructRNA RNA_SplineIKConstraint = {
	{(ContainerRNA *)&RNA_PivotConstraint, (ContainerRNA *)&RNA_DampedTrackConstraint,
	NULL,
	{(PropertyRNA *)&rna_SplineIKConstraint_target, (PropertyRNA *)&rna_SplineIKConstraint_xz_scale_mode}},
	"SplineIKConstraint", NULL, NULL, 4, "Spline IK Constraint",
	"Align \'n\' bones along a curve",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Pivot Constraint */
FloatPropertyRNA rna_PivotConstraint_head_tail = {
	{(PropertyRNA *)&rna_PivotConstraint_target, NULL,
	-1, "head_tail", 8195, "Head/Tail",
	"Target along length of bone: Head=0, Tail=1",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bConstraint, headtail), 4, NULL},
	PivotConstraint_head_tail_get, PivotConstraint_head_tail_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_PivotConstraint_target = {
	{(PropertyRNA *)&rna_PivotConstraint_subtarget, (PropertyRNA *)&rna_PivotConstraint_head_tail,
	-1, "target", 8388609, "Target",
	"Target Object, defining the position of the pivot when defined",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	PivotConstraint_target_get, PivotConstraint_target_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_PivotConstraint_subtarget = {
	{(PropertyRNA *)&rna_PivotConstraint_use_relative_location, (PropertyRNA *)&rna_PivotConstraint_target,
	-1, "subtarget", 262145, "Sub-Target",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	PivotConstraint_subtarget_get, PivotConstraint_subtarget_length, PivotConstraint_subtarget_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_PivotConstraint_use_relative_location = {
	{(PropertyRNA *)&rna_PivotConstraint_offset, (PropertyRNA *)&rna_PivotConstraint_subtarget,
	-1, "use_relative_location", 3, "Use Relative Offset",
	"Offset will be an absolute point in space instead of relative to the target",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	PivotConstraint_use_relative_location_get, PivotConstraint_use_relative_location_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_PivotConstraint_offset_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_PivotConstraint_offset = {
	{(PropertyRNA *)&rna_PivotConstraint_rotation_range, (PropertyRNA *)&rna_PivotConstraint_use_relative_location,
	-1, "offset", 8195, "Offset",
	"Offset of pivot from target (when set), or from owner\'s location (when Fixed Position is off), or the absolute pivot point",
	0, "*",
	PROP_FLOAT, PROP_XYZ | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Constraint_update, 85590016, NULL, NULL,
	offsetof(bPivotConstraint, offset), 4, NULL},
	NULL, NULL, PivotConstraint_offset_get, PivotConstraint_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PivotConstraint_offset_default
};

static EnumPropertyItem rna_PivotConstraint_rotation_range_items[8] = {
	{-1, "ALWAYS_ACTIVE", 0, "Always", "Use the pivot point in every rotation"},
	{0, "NX", 0, "-X Rot", "Use the pivot point in the negative rotation range around the X-axis"},
	{1, "NY", 0, "-Y Rot", "Use the pivot point in the negative rotation range around the Y-axis"},
	{2, "NZ", 0, "-Z Rot", "Use the pivot point in the negative rotation range around the Z-axis"},
	{3, "X", 0, "X Rot", "Use the pivot point in the positive rotation range around the X-axis"},
	{4, "Y", 0, "Y Rot", "Use the pivot point in the positive rotation range around the Y-axis"},
	{5, "Z", 0, "Z Rot", "Use the pivot point in the positive rotation range around the Z-axis"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PivotConstraint_rotation_range = {
	{NULL, (PropertyRNA *)&rna_PivotConstraint_offset,
	-1, "rotation_range", 3, "Enabled Rotation Range",
	"Rotation range on which pivoting should occur",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	PivotConstraint_rotation_range_get, PivotConstraint_rotation_range_set, NULL, NULL, NULL, NULL, rna_PivotConstraint_rotation_range_items, 7, 0
};

StructRNA RNA_PivotConstraint = {
	{(ContainerRNA *)&RNA_FollowTrackConstraint, (ContainerRNA *)&RNA_SplineIKConstraint,
	NULL,
	{(PropertyRNA *)&rna_PivotConstraint_head_tail, (PropertyRNA *)&rna_PivotConstraint_rotation_range}},
	"PivotConstraint", NULL, NULL, 4, "Pivot Constraint",
	"Rotate around a different point",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Follow Track Constraint */
PointerPropertyRNA rna_FollowTrackConstraint_clip = {
	{(PropertyRNA *)&rna_FollowTrackConstraint_track, NULL,
	-1, "clip", 8388673, "Movie Clip",
	"Movie Clip to get tracking data from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowTrackConstraint_clip_get, FollowTrackConstraint_clip_set, NULL, NULL,&RNA_MovieClip
};

StringPropertyRNA rna_FollowTrackConstraint_track = {
	{(PropertyRNA *)&rna_FollowTrackConstraint_use_active_clip, (PropertyRNA *)&rna_FollowTrackConstraint_clip,
	-1, "track", 262145, "Track",
	"Movie tracking track to follow",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowTrackConstraint_track_get, FollowTrackConstraint_track_length, FollowTrackConstraint_track_set, NULL, NULL, NULL, 64, ""
};

BoolPropertyRNA rna_FollowTrackConstraint_use_active_clip = {
	{(PropertyRNA *)&rna_FollowTrackConstraint_use_3d_position, (PropertyRNA *)&rna_FollowTrackConstraint_track,
	-1, "use_active_clip", 3, "Active Clip",
	"Use active clip defined in scene",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowTrackConstraint_use_active_clip_get, FollowTrackConstraint_use_active_clip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_FollowTrackConstraint_use_3d_position = {
	{(PropertyRNA *)&rna_FollowTrackConstraint_object, (PropertyRNA *)&rna_FollowTrackConstraint_use_active_clip,
	-1, "use_3d_position", 3, "3D Position",
	"Use 3D position of track to parent to",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowTrackConstraint_use_3d_position_get, FollowTrackConstraint_use_3d_position_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_FollowTrackConstraint_object = {
	{(PropertyRNA *)&rna_FollowTrackConstraint_camera, (PropertyRNA *)&rna_FollowTrackConstraint_use_3d_position,
	-1, "object", 262145, "Object",
	"Movie tracking object to follow (if empty, camera object is used)",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowTrackConstraint_object_get, FollowTrackConstraint_object_length, FollowTrackConstraint_object_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_FollowTrackConstraint_camera = {
	{(PropertyRNA *)&rna_FollowTrackConstraint_depth_object, (PropertyRNA *)&rna_FollowTrackConstraint_object,
	-1, "camera", 8388609, "Camera",
	"Camera to which motion is parented (if empty active scene camera is used)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowTrackConstraint_camera_get, FollowTrackConstraint_camera_set, NULL, rna_Constraint_cameraObject_poll,&RNA_Object
};

PointerPropertyRNA rna_FollowTrackConstraint_depth_object = {
	{(PropertyRNA *)&rna_FollowTrackConstraint_frame_method, (PropertyRNA *)&rna_FollowTrackConstraint_camera,
	-1, "depth_object", 8388609, "Depth Object",
	"Object used to define depth in camera space by projecting onto surface of this object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowTrackConstraint_depth_object_get, FollowTrackConstraint_depth_object_set, NULL, rna_Constraint_followTrack_depthObject_poll,&RNA_Object
};

static EnumPropertyItem rna_FollowTrackConstraint_frame_method_items[4] = {
	{0, "STRETCH", 0, "Stretch", ""},
	{1, "FIT", 0, "Fit", ""},
	{2, "CROP", 0, "Crop", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FollowTrackConstraint_frame_method = {
	{(PropertyRNA *)&rna_FollowTrackConstraint_use_undistorted_position, (PropertyRNA *)&rna_FollowTrackConstraint_depth_object,
	-1, "frame_method", 3, "Frame Method",
	"How the footage fits in the camera frame",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowTrackConstraint_frame_method_get, FollowTrackConstraint_frame_method_set, NULL, NULL, NULL, NULL, rna_FollowTrackConstraint_frame_method_items, 3, 0
};

BoolPropertyRNA rna_FollowTrackConstraint_use_undistorted_position = {
	{NULL, (PropertyRNA *)&rna_FollowTrackConstraint_frame_method,
	-1, "use_undistorted_position", 3, "Undistort",
	"Parent to undistorted position of 2D track",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	FollowTrackConstraint_use_undistorted_position_get, FollowTrackConstraint_use_undistorted_position_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_FollowTrackConstraint = {
	{(ContainerRNA *)&RNA_CameraSolverConstraint, (ContainerRNA *)&RNA_PivotConstraint,
	NULL,
	{(PropertyRNA *)&rna_FollowTrackConstraint_clip, (PropertyRNA *)&rna_FollowTrackConstraint_use_undistorted_position}},
	"FollowTrackConstraint", NULL, NULL, 4, "Follow Track Constraint",
	"Lock motion to the target motion track",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Camera Solver Constraint */
PointerPropertyRNA rna_CameraSolverConstraint_clip = {
	{(PropertyRNA *)&rna_CameraSolverConstraint_use_active_clip, NULL,
	-1, "clip", 8388673, "Movie Clip",
	"Movie Clip to get tracking data from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CameraSolverConstraint_clip_get, CameraSolverConstraint_clip_set, NULL, NULL,&RNA_MovieClip
};

BoolPropertyRNA rna_CameraSolverConstraint_use_active_clip = {
	{NULL, (PropertyRNA *)&rna_CameraSolverConstraint_clip,
	-1, "use_active_clip", 3, "Active Clip",
	"Use active clip defined in scene",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	CameraSolverConstraint_use_active_clip_get, CameraSolverConstraint_use_active_clip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_CameraSolverConstraint = {
	{(ContainerRNA *)&RNA_ObjectSolverConstraint, (ContainerRNA *)&RNA_FollowTrackConstraint,
	NULL,
	{(PropertyRNA *)&rna_CameraSolverConstraint_clip, (PropertyRNA *)&rna_CameraSolverConstraint_use_active_clip}},
	"CameraSolverConstraint", NULL, NULL, 4, "Camera Solver Constraint",
	"Lock motion to the reconstructed camera movement",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Object Solver Constraint */
PointerPropertyRNA rna_ObjectSolverConstraint_clip = {
	{(PropertyRNA *)&rna_ObjectSolverConstraint_use_active_clip, NULL,
	-1, "clip", 8388673, "Movie Clip",
	"Movie Clip to get tracking data from",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ObjectSolverConstraint_clip_get, ObjectSolverConstraint_clip_set, NULL, NULL,&RNA_MovieClip
};

BoolPropertyRNA rna_ObjectSolverConstraint_use_active_clip = {
	{(PropertyRNA *)&rna_ObjectSolverConstraint_object, (PropertyRNA *)&rna_ObjectSolverConstraint_clip,
	-1, "use_active_clip", 3, "Active Clip",
	"Use active clip defined in scene",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ObjectSolverConstraint_use_active_clip_get, ObjectSolverConstraint_use_active_clip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_ObjectSolverConstraint_object = {
	{(PropertyRNA *)&rna_ObjectSolverConstraint_camera, (PropertyRNA *)&rna_ObjectSolverConstraint_use_active_clip,
	-1, "object", 262145, "Object",
	"Movie tracking object to follow",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ObjectSolverConstraint_object_get, ObjectSolverConstraint_object_length, ObjectSolverConstraint_object_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_ObjectSolverConstraint_camera = {
	{NULL, (PropertyRNA *)&rna_ObjectSolverConstraint_object,
	-1, "camera", 8388609, "Camera",
	"Camera to which motion is parented (if empty active scene camera is used)",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Constraint_dependency_update, 85590016, NULL, NULL,
	0, -1, NULL},
	ObjectSolverConstraint_camera_get, ObjectSolverConstraint_camera_set, NULL, rna_Constraint_cameraObject_poll,&RNA_Object
};

StructRNA RNA_ObjectSolverConstraint = {
	{(ContainerRNA *)&RNA_Context, (ContainerRNA *)&RNA_CameraSolverConstraint,
	NULL,
	{(PropertyRNA *)&rna_ObjectSolverConstraint_clip, (PropertyRNA *)&rna_ObjectSolverConstraint_camera}},
	"ObjectSolverConstraint", NULL, NULL, 4, "Object Solver Constraint",
	"Lock motion to the reconstructed object movement",
	"*", 17,
	(PropertyRNA *)&rna_Constraint_name, (PropertyRNA *)&rna_Constraint_rna_properties,
	&RNA_Constraint,
	NULL,
	rna_ConstraintType_refine,
	rna_Constraint_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

